#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)typeid(int) > (float)b ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)typeid(int) > (double)b ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return (float)b > (double)b ? &a : &b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return str1 > str2 ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int i = boost::any_cast<int>(a);
        string s = boost::any_cast<string>(b);
        return i > std::stoi(s) ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double d = boost::any_cast<double>(a);
        string s = boost::any_cast<string>(b);
        return d > std::stod(s) ? a : b;
    } else {
        return "None";
    }
}