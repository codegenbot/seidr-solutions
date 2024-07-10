#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return max((int)a.convert_to<int>(), (double)b.convert_to<double>());
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return max((double)a.convert_to<double>(), (string)b.convert_to<string>());
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (max(a.convert_to<string>(), b.convert_to<string())) ? b : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (int)a.convert_to<int>() > stoi((string)b.convert_to<string>()) ? &a : &b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a.convert_to<double>() > (int)b.convert_to<int>() ? &a : &b;
    }
    return boost::any("None");
}