#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > (int)a ? b : (int)a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        int aInt = boost::any_cast<int>(a);
        return aInt > stod(str) ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return stod(str2) > stod(str1) ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        int aInt = boost::any_cast<int>(a);
        return aInt > stod(str) ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a) > boost::any_cast<int>(b) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int aInt = boost::any_cast<int>(b);
        string str = boost::any_cast<string>(a);
        return stod(str) > aInt ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float f1 = boost::any_cast<float>(a);
        float f2 = boost::any_cast<float>(b);
        return f1 > f2 ? a : b;
    }
    else {
        return boost::any("None");
    }
}