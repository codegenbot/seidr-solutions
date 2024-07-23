#include <iostream>
#include <string>
#include <algorithm>
#include <boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return max((int)a.to_type<int>(), (double)b.to_type<double>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if ((string)a.to_type<string>() > b.to_type<string>()) {
            return a;
        }
        else if ((string)a.to_type<string>() < b.to_type<string>()) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        if ((double)a.to_type<double>() > stod((string)b.to_type<string>())) {
            return a;
        }
        else if ((double)a.to_type<double>() < stod((string)b.to_type<string>())) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if ((string)a.to_type<string>() > to_string((int)b.to_type<int>())) {
            return a;
        }
        else if ((string)a.to_type<string>() < to_string((int)b.to_type<int>())) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if ((string)a.to_type<string>() > to_string((double)b.to_type<double>())) {
            return a;
        }
        else if ((string)a.to_type<string>() < to_string((double)b.to_type<double>())) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(int) && a.to_type<int>() > b.to_type<int>()) {
        return a;
    }
    else if (b.type() == typeid(int) && b.to_type<int>() > a.to_type<int>()) {
        return b;
    }
    else {
        return boost::any("None");
    }
}