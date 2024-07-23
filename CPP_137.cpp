#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if (stod(str1) > stod(str2))
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str1 = boost::any_cast<string>(a);
        double d2 = boost::any_cast<double>(b);
        if (stod(str1) > d2)
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if (stod(str1) > stod(str2))
            return a;
        else
            return b;
    }
    else {
        return "None";
    }
}