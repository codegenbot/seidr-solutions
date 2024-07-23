#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) a > (float) b ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int) a > (double) b ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return (float) a > (double) b ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        istringstream iss(str1);
        double num1;
        iss >> num1;
        istringstream iss2(str2);
        double num2;
        iss2 >> num2;
        return (num1 > num2) ? a : b;
    } else if (a.type() == typeid(string)) {
        string str = any_cast<string>(a);
        istringstream iss(str);
        double num;
        iss >> num;
        return (b.type() == typeid(double)) ? boost::any((double) num > (double) b ? a : b) : boost::any("None");
    } else if (b.type() == typeid(string)) {
        string str = any_cast<string>(b);
        istringstream iss(str);
        double num;
        iss >> num;
        return (a.type() == typeid(double)) ? boost::any((double) a > (double) num ? a : b) : boost::any("None");
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int) a > (int) b ? a : b;
    }
    return "None";
}