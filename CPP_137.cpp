#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if (str1 > str2) return a;
        else if (str1 < str2) return b;
        else return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::any_cast<string>(a);
        float f = boost::any_cast<float>(b);
        if (stof(str) > f) return a;
        else if (stof(str) < f) return b;
        else return boost::any("None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float f = boost::any_cast<float>(a);
        string str = boost::any_cast<string>(b);
        if (f > stof(str)) return a;
        else if (f < stof(str)) return b;
        else return boost::any("None");
    }
    else {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) return a;
        else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) return b;
        else return boost::any("None");
    }
}