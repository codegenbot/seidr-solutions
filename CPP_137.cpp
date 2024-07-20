#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stod(boost::any_cast<string>(a).erase(0, 1).erase(stod(boost::any_cast<string>(b)).length(), boost::any_cast<string>(b).length())) >= stod(boost::any_cast<string>(b))) {
            return a;
        }
        else {
            return b;
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if (stod(boost::any_cast<string>(a).erase(0, 1)) >= b.cast<double>()) {
            return a;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        if (a.cast<double>() >= stod(boost::any_cast<string>(b).erase(0, 1))) {
            return a;
        }
        else {
            return boost::any("None");
        }
    }
    else {
        return boost::any("None");
    }
}