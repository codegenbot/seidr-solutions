#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b){
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        if (num1 > num2) {
            return num1;
        } else if (num1 < num2) {
            return num2;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = boost::any_cast<float>(a);
        float num2 = boost::any_cast<float>(b);
        if (num1 > num2) {
            return num1;
        } else if (num1 < num2) {
            return num2;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if (str1 > str2) {
            return str1;
        } else if (str1 < str2) {
            return str2;
        } else {
            return "None";
        }
    } else if ((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int))) {
        return "None";
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int num1 = boost::any_cast<int>(a);
        float num2 = boost::any_cast<float>(b);
        if (num1 > num2) {
            return num1;
        } else if (num1 < num2) {
            return num2;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float num1 = boost::any_cast<float>(a);
        int num2 = boost::any_cast<int>(b);
        if (num1 > num2) {
            return num1;
        } else if (num1 < num2) {
            return num2;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return "None";
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return "None";
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float num1 = boost::any_cast<float>(a);
        string str2 = boost::any_cast<string>(b);
        if (num1 > stof(str2)) {
            return num1;
        } else if (num1 < stof(str2)) {
            return stof(str2);
        } else {
            return "None";
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float num1 = stof(boost::any_cast<string>(a));
        float num2 = boost::any_cast<float>(b);
        if (num1 > num2) {
            return num1;
        } else if (num1 < num2) {
            return num2;
        } else {
            return "None";
        }
    } else {
        return "None";
    }
}