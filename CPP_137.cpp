#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(float)) {
        return (double)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        double num1 = stod(str1);
        double num2 = stod(str2);
        return num1 > num2 ? a : b;
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        string str = any_cast<string>(a);
        double num = stod(str);
        return num > any_cast<any>(b) ? a : b;
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(double)) && b.type() == typeid(string)) {
        double num1 = any_cast<any>(a).any_cast<double>();
        string str2 = any_cast<string>(b);
        double num2 = stod(str2);
        return num1 > num2 ? a : b;
    }
    else {
        return boost::any("None");
    }
}