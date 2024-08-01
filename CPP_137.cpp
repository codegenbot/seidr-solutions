#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stod(b.cast<string>().c_str()) > stod(a.cast<string>().c_str())) {
            return b;
        } else if (stod(b.cast<string>().c_str()) < stod(a.cast<string>().c_str())) {
            return a;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if ((string)b >> std::fix << stod(a.cast<string>().c_str())) {
            return b;
        } else {
            return a;
        }
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        if ((double)b > stod(a.cast<string>().c_str())) {
            return b;
        } else {
            return a;
        }
    }

    // If all above conditions fail, return the first argument
    return a;
}