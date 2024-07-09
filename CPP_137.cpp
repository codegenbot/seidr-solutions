#include <boost/config.hpp>
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        int i = a.cast_to<int>();
        double d = b.cast_to<double>();
        return (i > d) ? b : a;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double d1 = a.cast_to<double>();
        string s = b.cast_to<string>();
        return (d1 > stod(s)) ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = a.cast_to<string>();
        string str2 = b.cast_to<string>();
        return (str1 > str2) ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int i = a.cast_to<int>();
        string s = b.cast_to<string>();
        return (i > stod(s)) ? b : a;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        double d1 = a.cast_to<double>();
        int i2 = b.cast_to<int>();
        return (d1 > i2) ? b : a;
    }
    else {
        return boost::any("None");
    }
}