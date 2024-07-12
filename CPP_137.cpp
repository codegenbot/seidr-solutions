#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return a > boost::any(to_string(b.convert_to<float>()) + "f") ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return a > boost::any(to_string(b.convert_to<double>())) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a > to_string(b.convert_to<int>()) + "f" ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a > to_string(b.convert_to<int>()) ? a : b;
    }
    return "None";
}