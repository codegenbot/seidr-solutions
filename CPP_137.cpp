#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return str1 > str2 ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num1 = boost::any_cast<int>(a);
        string str2 = boost::any_cast<string>(b);
        return to_string(num1) > str2 ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str1 = boost::any_cast<string>(a);
        int num2 = boost::any_cast<int>(b);
        return str1 > to_string(num2) ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double num1 = boost::any_cast<double>(a);
        string str2 = boost::any_cast<string>(b);
        return to_string(num1) > str2 ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string str1 = boost::any_cast<string>(a);
        double num2 = boost::any_cast<double>(b);
        return str1 > to_string(num2) ? a : b;
    }
    return boost::any("None");
}