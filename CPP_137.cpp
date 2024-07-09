#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int) a.convert_to<int>() > (double) b.convert_to<double>() ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double) a.convert_to<double>() > (int) b.convert_to<int>() ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = a.convert_to<string>();
        string str2 = b.convert_to<string>();
        return str1 > str2 ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string str = a.convert_to<string>();
        double d = boost::any_cast<double>(b);
        return str > to_string(d) ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double d = boost::any_cast<double>(a);
        string str = b.convert_to<string>();
        return to_string(d) > str ? a : b;
    } else {
        return "None";
    }
}