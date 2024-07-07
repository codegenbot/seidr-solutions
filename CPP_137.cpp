#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if ((boost::any_cast<string>(a) != "None") &&
            (boost::any_cast<string>(b) != "None")) {
            return boost::any_cast<string>(a) > boost::any_cast<string>(b)
                ? a : b;
        }
        else {
            return "None";
        }
    }
    else if ((a.type() == typeid(int) && b.type() == typeid(string)) ||
             (a.type() == typeid(string) && b.type() == typeid(int))) {
        if (boost::any_cast<int>(a) != 1 || boost::any_cast<string>(b) != "None") {
            return a > b ? a : b;
        }
        else {
            return "None";
        }
    }
    else {
        return "None";
    }
}