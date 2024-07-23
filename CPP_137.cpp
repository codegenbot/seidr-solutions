#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if (str1 > str2) {
            return a;
        } else if (str1 < str2) {
            return b;
        } else {
            return any("None");
        }
    }
    if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        string str = boost::any_cast<string>(a);
        double num = boost::any_cast<double>(b);
        if (num > 0.0) {
            return a;
        } else {
            return any("None");
        }
    }
    if ((a.type() == typeid(int) || a.type() == typeid(double)) && b.type() == typeid(string)) {
        double num = boost::any_cast<double>(a);
        string str = boost::any_cast<string>(b);
        if (num > 0.0) {
            return any("None");
        } else {
            return b;
        }
    }
    // If none of the above conditions are met, return "None"
    return any("None");
}