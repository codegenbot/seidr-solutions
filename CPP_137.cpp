#include <string>
#include <typeinfo>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return max((int)a.convert_to<int>(), (double)b.convert_to<double>());
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return max((double)a.convert_to<double>(), (int)b.convert_to<int>());
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        return (string)b.convert_to<string>();
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return (string)b.convert_to<string>();
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if ((string)a.convert_to<string>() > (string)b.convert_to<string>()) {
            return a;
        } else if ((string)a.convert_to<string>() < (string)b.convert_to<string>()) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if ((int)a.convert_to<int>() > stoi((string)b.convert_to<string>())) {
            return a;
        } else if ((int)a.convert_to<int>() < stoi((string)b.convert_to<string>())) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if (stoi((string)a.convert_to<string>()) > (int)b.convert_to<int>()) {
            return a;
        } else if (stoi((string)a.convert_to<string>()) < (int)b.convert_to<int>()) {
            return b;
        } else {
            return boost::any("None");
        }
    }

    return boost::any("None");
}