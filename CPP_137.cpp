#include <boost/config.hpp>
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a.cast_to<int>() > (double)b.cast_to<double>() ? b : a;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        return (double)a.cast_to<double>() > stod(str) ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return str1 > str2 ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        return (int)a.cast_to<int>() > stod(str) ? b : a;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a.cast_to<double>() > (int)b.cast_to<int>() ? b : a;
    }
    else {
        return boost::any("None");
    }
}