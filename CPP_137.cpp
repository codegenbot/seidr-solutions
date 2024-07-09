#include <boost/any.hpp>
#include <string>
#include <algorithm>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return b;
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stod(a.to_string()) > stod(b.to_string())) {
            return a;
        } else if (stod(a.to_string()) < stod(b.to_string())) {
            return b;
        } else {
            return boost::any("None");
        }
    }
    if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        double x = stod(a.to_string());
        if ((typeid(int) == b.type()) ? x : (double)b.convert_to<double>()) > x) {
            return a;
        } else {
            return b;
        }
    }
    if ((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(string)) {
        double x = (a.type() == typeid(int)) ? (double)a.convert_to<int>() : (double)a.convert_to<float>();
        if (stod(b.to_string()) > x) {
            return b;
        } else {
            return boost::any("None");
        }
    }
    if ((typeid(int) == a.type()) && (typeid(int) == b.type())) {
        return boost::any((int)max((int)a.convert_to<int>(), (int)b.convert_to<int>()));
    }
    return boost::any();
}