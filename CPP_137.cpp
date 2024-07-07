#include <boost/any.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        return a;
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return a;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = boost::any_cast<string>(a);
        string s2 = boost::any_cast<string>(b);
        if (stod(s1) > stod(s2))
            return a;
        else if (stod(s1) < stod(s2))
            return b;
        else
            return boost::any("None");
    } else {
        return boost::any("None");
    }
}