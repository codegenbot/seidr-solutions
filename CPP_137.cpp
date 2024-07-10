#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : (b.convert_to<boost::any>()));
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? a : (b.convert_to<boost::any>()));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string str = boost::any_cast<string>(a);
        double num = boost::any_cast<double>(b);
        return str > to_string(num) ? a : (b.convert_to<boost::any>()));
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        double num = boost::any_cast<double>(a);
        return to_string(num) > str ? a : (b.convert_to<boost::any>()));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return str1 > str2 ? a : (b.convert_to<boost::any>()));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num = boost::any_cast<int>(a);
        string str = boost::any_cast<string>(b);
        return to_string(num) > str ? a : (b.convert_to<boost::any>()));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int num = boost::any_cast<int>(b);
        string str = boost::any_cast<string>(a);
        return str > to_string(num) ? a : (b.convert_to<boost::any>()));
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double num1 = boost::any_cast<double>(a);
        double num2 = boost::any_cast<double>(b);
        return num1 > num2 ? a : (b.convert_to<boost::any>()));
    }
    else {
        return "None";
    }
}