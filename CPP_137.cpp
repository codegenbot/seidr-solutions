#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any(b);
    }
    if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any(b);
    }
    if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if (boost::lexical_cast<double>(b.cast<string>()) > a.cast<string>()){
            return b;
        } else if (boost::lexical_cast<double>(b.cast<string>()) < a.cast<string>()){
            return a;
        } else {
            return boost::any("None");
        }
    }
    if (a.type() == typeid(double) && b.type() == typeid(string)) {
        if (boost::lexical_cast<double>(a.cast<string>()) > b.cast<string>()){
            return a;
        } else if (boost::lexical_cast<double>(a.cast<string>()) < b.cast<string>()){
            return b;
        } else {
            return boost::any("None");
        }
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (boost::lexical_cast<double>(b.cast<string>()) > a.cast<string>()){
            return b;
        } else if (boost::lexical_cast<double>(b.cast<string>()) < a.cast<string>()){
            return a;
        } else {
            return boost::any("None");
        }
    }
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)){
            return a;
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)){
            return b;
        } else {
            return boost::any("None");
        }
    }
    return boost::any();
}