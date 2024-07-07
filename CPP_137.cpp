#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        double d = boost::any_cast<double>(a);
        if (d > 0.0)
            return a;
        else
            return s;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = boost::any_cast<string>(a);
        string s2 = boost::any_cast<string>(b);
        return (s1 > s2 ? a : b);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        double d = boost::any_cast<double>(a);
        int i = boost::any_cast<int>(b);
        return (d > 0.0 ? a : boost::any(b));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int i1 = boost::any_cast<int>(a);
        int i2 = boost::any_cast<int>(b);
        return (i1 > i2 ? a : (i1 < i2 ? b : boost::any("None")));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string s = boost::any_cast<string>(a);
        double d = boost::any_cast<double>(b);
        return (d > 0.0 ? a : boost::any(b));
    }
    else
        return boost::any("None");
}