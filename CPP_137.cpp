```
#include <iostream>
#include <string>
#include <algorithm>
#include <boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return any_cast<int>(a) > any_cast<float>(b)
               ? a
               : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return any_cast<float>(b) > any_cast<int>(a)
               ? b
               : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return any_cast<string>(a) >= any_cast<string>(b)
               ? a
               : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num = any_cast<int>(a);
        string str = any_cast<string>(b);
        return num >= stoi(str)
               ? a
               : boost::any(b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = any_cast<string>(a);
        int num = any_cast<int>(b);
        return stoi(str) >= num
               ? a
               : boost::any(b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float num = any_cast<float>(a);
        string str = any_cast<string>(b);
        return num >= stof(str)
               ? a
               : boost::any(b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = any_cast<string>(b);
        float num = any_cast<float>(a);
        return stof(str) >= num
               ? a
               : boost::any(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return any_cast<int>(a) > any_cast<int>(b)
               ? a
               : b;
    }
    else {
        return boost::any();
    }
}