#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b);
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any_cast<double>(a);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if (str1 > str2) return a;
        else if (str1 < str2) return b;
        else return boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string str = boost::any_cast<string>(a);
        double num = boost::any_cast<double>(b);
        if (stod(str) > num) return a;
        else if (stod(str) < num) return b;
        else return boost::any("None");
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double num = boost::any_cast<double>(a);
        string str = boost::any_cast<string>(b);
        if (num > stod(str)) return a;
        else if (num < stod(str)) return b;
        else return boost::any("None");
    }
    return boost::any();
}