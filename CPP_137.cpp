#include <boost/any.hpp>
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (lexical_cast<double>(any_cast<string>(a)) > lexical_cast<double>(any_cast<string>(b))) {
            return a;
        }
        else if (lexical_cast<double>(any_cast<string>(a)) < lexical_cast<double>(any_cast<string>(b))) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if (lexical_cast<double>(any_cast<string>(a)) > b) {
            return a;
        }
        else if (lexical_cast<double>(any_cast<string>(a)) < b) {
            return boost::any(b);
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        if (a > lexical_cast<double>(any_cast<string>(b))) {
            return a;
        }
        else if (a < lexical_cast<double>(any_cast<string>(b))) {
            return boost::any(b);
        }
        else {
            return boost::any("None");
        }
    }
    else {
        if (a.convert_to<double>() > b.convert_to<double>()) {
            return a;
        }
        else if (a.convert_to<double>() < b.convert_to<double>()) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
}