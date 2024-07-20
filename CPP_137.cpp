```cpp
#include <boost/any_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > static_cast<int>(a) ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b) > static_cast<int>(a) ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a) > static_cast<int>(b) ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any_cast<double>(a) > static_cast<int>(b) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return str1 > str2 ? a : b;
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(float) || a.type() == typeid(double)) &&
             (b.type() == typeid(string))) {
        string str = boost::any_cast<string>(b);
        double num = boost::any_cast<double>(a);
        return num > stod(str) ? a : b;
    }
    else if ((a.type() == typeid(string)) && (b.type() == typeid(int) || b.type() == typeid(float) || b.type() == typeid(double))) {
        string str = boost::any_cast<string>(a);
        double num = boost::any_cast<double>(b);
        return stod(str) > num ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return "None";
    }
    else {
        return a > b ? a : b;
    }
}