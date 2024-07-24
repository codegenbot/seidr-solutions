#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b);
    }
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    }
    if (a.type() == typeid(int) && b.type() == typeid(long double)) {
        return boost::any_cast<long double>(b);
    }
    if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a;
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a;
    }
    if (a.type() == typeid(long double) && b.type() == typeid(int)) {
        return a;
    }
    if (a.type() == typeid(string) && b.type() == typeid(double)) {
        return b;
    }
    if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return b;
    }
    if (a.type() == typeid(string) && b.type() == typeid(long double)) {
        return b;
    }
    if (a.type() == typeid(double) && b.type() == typeid(string)) {
        if (boost::any_cast<string>(b) == "None") {
            return a;
        } else {
            return boost::any_cast<string>(b);
        }
    }
    if (a.type() == typeid(float) && b.type() == typeid(string)) {
        if (boost::any_cast<string>(b) == "None") {
            return a;
        } else {
            return boost::any_cast<string>(b);
        }
    }
    if (a.type() == typeid(long double) && b.type() == typeid(string)) {
        if (boost::any_cast<string>(b) == "None") {
            return a;
        } else {
            return boost::any_cast<string>(b);
    }

    if (boost::any_cast<string>(a) >= boost::any_cast<string>(b))
        return a;
    else
        return b;
}