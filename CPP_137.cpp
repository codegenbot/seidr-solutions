#include <iostream>
#include <string>
#include <algorithm>
#include <boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if (stod(str1) > stod(str2))
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num1 = boost::any_cast<int>(a);
        string str = boost::any_cast<string>(b);
        double d = stod(str);
        if (num1 > d)
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int num2 = boost::any_cast<int>(b);
        string str = boost::any_cast<string>(a);
        double d = stod(str);
        if (d > num2)
            return a;
        else
            return b;
    }
    else {
        return boost::any("None");
    }
}