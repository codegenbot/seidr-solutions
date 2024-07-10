#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a.convert_to<int>() > (float)b.convert_to<float>() ? b : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a.convert_to<int>() > (double)b.convert_to<double>() ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a.convert_to<float>() > (int)b.convert_to<int>() ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a.convert_to<double>() > (int)b.convert_to<int>() ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float fa = stof((string)a.convert_to<string>());
        float fb = (float)b.convert_to<float>();
        return fa > fb ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double da = stod((string)a.convert_to<string>());
        double db = (double)b.convert_to<double>();
        return da > db ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int ia = stoi((string)a.convert_to<string>());
        int ib = (int)b.convert_to<int>();
        return ia > ib ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = (string)a.convert_to<string>();
        string sb = (string)b.convert_to<string>();
        if (sa == sb) {
            return boost::any("None");
        } else {
            return a > b ? a : b;
        }
    }
}