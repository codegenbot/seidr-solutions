```
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        size_t pos = str1.find(',');
        if (pos != string::npos) {
            double num1 = stod(str1.substr(0, pos));
            double num2 = stod(str2);
            return num1 > num2 ? a : b;
        } else {
            return (any_cast<string>(a) > any_cast<string>(b)) ? a : b;
        }
    } else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        string str = any_cast<string>(a);
        size_t pos = str.find(',');
        if (pos != string::npos) {
            double num1 = stod(str.substr(0, pos));
            return (any_cast<int>(b) > num1 || any_cast<double>(b) > num1) ? b : a;
        } else {
            return (any_cast<string>(a) == any_cast<string>(b)) ? boost::any() : a;
        }
    } else if ((a.type() == typeid(int) || a.type() == typeid(double)) && b.type() == typeid(string)) {
        string str = any_cast<string>(b);
        size_t pos = str.find(',');
        if (pos != string::npos) {
            double num1 = stod(str.substr(0, pos));
            return (any_cast<int>(a) > num1 || any_cast<double>(a) > num1) ? a : b;
        } else {
            return (any_cast<string>(b) == any_cast<string>(a)) ? boost::any() : b;
        }
    }

    if (a.type() == typeid(int) && a.convert_to<int>() == a.convert_to<double>()) {
        if (b.type() == typeid(double) && b.convert_to<int>() == b.convert_to<double>()) {
            return boost::any();
        } else {
            return (any_cast<int>(a) > any_cast<double>(b)) ? a : b;
        }
    }

    return a > b ? a : b;
}