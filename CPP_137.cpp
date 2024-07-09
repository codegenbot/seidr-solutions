#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    }
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : b;
    }
    if (a.type() == typeid(int) && b.type() == typeid(long double)) {
        return (int)a > (long double)b ? a : b;
    }
    if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return (float)a > (double)b ? a : b;
    }
    if (a.type() == typeid(double) && b.type() == typeid(long double)) {
        return (double)a > (long double)b ? a : b;
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        int num1 = std::stoi(str1.substr(0, str1.find(',')));
        int num2 = std::stoi(str2.substr(0, str2.find(',')));
        return (num1 > num2) ? a : b;
    }
    if (a.type() == typeid(string)) {
        return "None";
    }
    return a > b ? a : b;
}