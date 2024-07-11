#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <boost/convert.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        if (str1 > str2) {
            return a;
        }
        else if (str1 < str2) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num = any_cast<int>(a);
        string str = any_cast<string>(b);
        if (stoi(str) > num) {
            return b;
        }
        else if (stoi(str) < num) {
            return a;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = any_cast<string>(a);
        int num = any_cast<int>(b);
        if (stoi(str) > num) {
            return a;
        }
        else if (stoi(str) < num) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float fl = any_cast<float>(a);
        int num = any_cast<int>(b);
        if (fl > num) {
            return a;
        }
        else if (fl < num) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int num = any_cast<int>(a);
        float fl = any_cast<float>(b);
        if (num > fl) {
            return a;
        }
        else if (num < fl) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    return boost::any();
}