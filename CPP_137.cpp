#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) a > (float) b ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int) a > (double) b ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float) a > (int) b ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double) a > (int) b ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::any_cast<string>(a);
        float f = boost::any_cast<float>(b);
        return str > to_string(f) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string str = boost::any_cast<string>(a);
        double d = boost::any_cast<double>(b);
        return str > to_string(d) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float f = boost::any_cast<float>(a);
        string str = boost::any_cast<string>(b);
        return to_string(f) > str ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double d = boost::any_cast<double>(a);
        string str = boost::any_cast<string>(b);
        return to_string(d) > str ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if (str1 != str2) {
            return str1 > str2 ? a : b;
        } else {
            return "None";
        }
    }

    return "None";
}