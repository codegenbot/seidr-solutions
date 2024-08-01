#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float fa = a.convert_to<float>();
        string fb = b.convert_to<string>();
        return stof(fb) > fa ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = a.convert_to<string>();
        string sb = b.convert_to<string>();
        return stof(sb) > stof(sa) ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int ai = a.convert_to<int>();
        int bi = b.convert_to<int>();
        return ai > bi ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float af = a.convert_to<float>();
        float bf = b.convert_to<float>();
        return af > bf ? a : b;
    }
    else {
        return "None";
    }
}