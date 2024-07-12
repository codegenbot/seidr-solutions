#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a.convert_to<int>() > (float)b.convert_to<float>() ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = (string)b.convert_to<string>();
        if (str.find('.') != string::npos || str.find(',') != string::npos) {
            float f = stof(str);
            return f > (float)a.convert_to<float>() ? b : a;
        } else {
            int i = stoi(str);
            return i > (int)a.convert_to<int>() ? b : a;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = (string)a.convert_to<string>();
        string str2 = (string)b.convert_to<string>();
        if (str1.find('.') != string::npos || str1.find(',') != string::npos) {
            float f1 = stof(str1);
            float f2 = stof(str2);
            return f1 > f2 ? a : b;
        } else {
            int i1 = stoi(str1);
            int i2 = stoi(str2);
            return i1 > i2 ? a : b;
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a.convert_to<int>() > (int)b.convert_to<int>() ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (float)a.convert_to<float>() > (float)b.convert_to<float>() ? a : b;
    }
    return boost::any("None");
}