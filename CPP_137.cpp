#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);

        if (str1 > str2) {
            return a;
        } else if (str1 < str2) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        string str = boost::any_cast<string>(a);
        double num;

        try {
            num = stod(str);
            return b;
        } catch (...) {
            return a;
        }
    } else if ((a.type() == typeid(int) || a.type() == typeid(double)) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);

        try {
            double num = stod(str);
            return (a.convert_to<double>() > num) ? a : b;
        } catch (...) {
            return boost::any("None");
        }
    }

    return boost::any("None");
}