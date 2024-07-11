#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        int num = boost::any_cast<int>(a);
        return num > stoi(str) ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > b.convert_to<float>() ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        int num = boost::any_cast<int>(b);
        return stoi(str) > num ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        float num = boost::any_cast<float>(a);
        return num > stof(str) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return stod(str2) > stod(str1) ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        int num = boost::any_cast<int>(a);
        return num > stoi(str) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        float num = boost::any_cast<float>(a);
        return num > stof(str) ? a : b;
    }
    else {
        return "None";
    }
}