#include <boost/any.hpp>
#include <boost/type_index.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(b);
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if (stod(b.convert_to<string>().c_str()) > a.convert_to<string>().c_str()) {
            return b;
        } else if (stod(b.convert_to<string>().c_str()) < stod(a.convert_to<string>().c_str())) {
            return a;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if (stod(b.convert_to<string>().c_str()) > a.convert_to<string>().c_str()) {
            return b;
        } else if (stod(b.convert_to<string>().c_str()) < stod(a.convert_to<string>().c_str())) {
            return a;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stod(b.convert_to<string>().c_str()) > stod(a.convert_to<string>().c_str())) {
            return b;
        } else if (stod(b.convert_to<string>().c_str()) < stod(a.convert_to<string>().c_str())) {
            return a;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if (stoi(b.convert_to<string>().c_str()) > a) {
            return b;
        } else if (stoi(b.convert_to<string>().c_str()) < a) {
            return a;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        if (stod(b.convert_to<string>().c_str()) > a) {
            return b;
        } else if (stod(b.convert_to<string>().c_str()) < a) {
            return a;
        } else {
            return boost::any("None");
        }
    } else {
        if (a.convert_to<int>() > b.convert_to<int>()) {
            return a;
        } else if (a.convert_to<int>() < b.convert_to<int>()) {
            return b;
        } else {
            return boost::any("None");
        }
    }
}