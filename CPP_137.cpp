#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        return a;
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stod(a.convert_to<string>().c_str()) > stod(b.convert_to<string>().c_str())) {
            return a;
        } else if (stod(a.convert_to<string>().c_str()) < stod(b.convert_to<string>().c_str())) {
            return b;
        } else {
            return boost::any("None");
        }
    } else {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return b;
        } else {
            return boost::any("None");
        }
    }
}