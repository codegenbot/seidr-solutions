#include <iostream>
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int) a > (double) b ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double) a > (int) b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = any_cast<string>(a);
        string s2 = any_cast<string>(b);
        double n1 = stod(s1);
        double n2 = stod(s2);
        return n1 > n2 ? a : b;
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        string s = any_cast<string>(a);
        double n = stod(s);
        return n > (boost::any_cast<int>(b)) ? a : b;
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(double)) && b.type() == typeid(string)) {
        double n1 = boost::any_cast<double>(a);
        string s2 = any_cast<string>(b);
        double n2 = stod(s2);
        return n1 > n2 ? a : b;
    }
    else if (a.type() == typeid(int) && a.convert_to<int>() == a.convert_to<double>()) {
        return "None";
    }
    else if (a.type() == typeid(double) && a.convert_to<double>() == a.convert_to<int>()) {
        return "None";
    }
    else if (a.type() == typeid(string) && any_cast<string>(a).find('.') == string::npos) {
        return "None";
    }
    return a;
}