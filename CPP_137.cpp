#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if (boost::any_cast<string>(b) != "None") {
            return b;
        }
        else {
            return a;
        }
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        if (boost::any_cast<string>(a) != "None") {
            return a;
        }
        else {
            return b;
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (boost::any_cast<string>(a) > boost::any_cast<string>(b)) {
            return a;
        }
        else if (boost::any_cast<string>(a) < boost::any_cast<string>(b)) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if (boost::any_cast<string>(b) != "None") {
            return b;
        }
        else {
            return a;
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if (boost::any_cast<string>(a) != "None") {
            return a;
        }
        else {
            return boost::any("None");
        }
    }

    return boost::any("None");
}