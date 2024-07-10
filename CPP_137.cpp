#include <iostream>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if (stod(b.convert_to<string>().c_str()) > stod(a.convert_to<string>().c_str())) {
            return b;
        } else if (stod(b.convert_to<string>().c_str()) < stod(a.convert_to<string>().c_str())) {
            return a;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        if (stod(a.convert_to<double>()) > stod(b.convert_to<string>().c_str())) {
            return a;
        } else if (stod(a.convert_to<double>()) < stod(b.convert_to<string>().c_str())) {
            return boost::any(b.convert_to<string>());
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stod(a.convert_to<string>().c_str()) > stod(b.convert_to<string>().c_str())) {
            return a;
        } else if (stod(a.convert_to<string>().c_str()) < stod(b.convert_to<string>().c_str())) {
            return b;
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