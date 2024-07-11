#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);

        if (strA > strB) {
            return a;
        }
        else if (strA < strB) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if ((a.type() == typeid(double) && b.type() == typeid(string)) || 
             (a.type() == typeid(string) && b.type() == typeid(double))) {
        if (boost::any_cast<double>(a) > boost::any_cast<double>(b)) {
            return a;
        }
        else if (boost::any_cast<double>(a) < boost::any_cast<double>(b)) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }

    return boost::any();
}