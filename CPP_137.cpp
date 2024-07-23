#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return max((int)a.convert<int>(), (double)b.convert<double>());
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return max((double)a.convert<double>(), (int)b.convert<int>());
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        if (str1 > str2)
            return a;
        else if (str1 < str2)
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double d = any_cast<double>(a);
        string s = any_cast<string>(b);
        if (d > stod(s))
            return a;
        else
            return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double d = any_cast<double>(b);
        string s = any_cast<string>(a);
        if (stod(s) > d)
            return a;
        else
            return b;
    }
    return boost::any("None");
}