#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > a.convert_to<int>() ? b : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        int b_int = atoi(strchr(s.c_str(), ',') + 1);
        return a.convert_to<int>() > b_int ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        float b_float = stof(s);
        return a.convert_to<float>() > b_float ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return a.convert_to<int>() > b.convert_to<int>() ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return a.convert_to<float>() > b.convert_to<float>() ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int b_int = boost::any_cast<int>(b);
        string s = boost::any_cast<string>(a);
        int a_int = atoi(strchr(s.c_str(), ',') + 1);
        return a_int > b_int ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float b_float = boost::any_cast<float>(b);
        string s = boost::any_cast<string>(a);
        int a_int = atoi(strchr(s.c_str(), ',') + 1);
        return a_int > b_float ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return boost::any_cast<string>(a) > boost::any_cast<string>(b) ? a : b;
    }
    return "None";
}