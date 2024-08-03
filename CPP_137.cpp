#include <iostream>
#include<string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        if (strA > strB) {
            return a;
        } else if (strA < strB) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() != typeid(string)) {
        string strA = boost::any_cast<string>(a);
        if (strA > to_string(boost::any_cast<int>(b))) {
            return a;
        } else if (strA < to_string(boost::any_cast<int>(b))) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() != typeid(string) && b.type() == typeid(string)) {
        string strB = boost::any_cast<string>(b);
        if (to_string(boost::any_cast<int>(a)) > strB) {
            return a;
        } else if (to_string(boost::any_cast<int>(a)) < strB) {
            return b;
        } else {
            return boost::any("None");
        }
    } else {
        return boost::any("None");
    }
}