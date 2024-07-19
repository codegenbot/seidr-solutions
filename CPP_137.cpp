#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = any_cast<string>(b);
        int num = any_cast<int>(a);
        return num > stoi(str) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = any_cast<string>(b);
        float num = any_cast<float>(a);
        return num > stof(str) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int num = any_cast<int>(b);
        string str = any_cast<string>(a);
        return stoi(str) > num ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float num = any_cast<float>(b);
        string str = any_cast<string>(a);
        return stof(str) > num ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = any_cast<int>(a), num2 = any_cast<int>(b);
        return num1 > num2 ? a : b;
    } else {
        return boost::any("None");
    }
}