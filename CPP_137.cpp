Here is the completed code:

#include <iostream>
#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a > (int)b ? a : ((int)a == (int)b) ? boost::any("None") : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return (double)a > (double)b ? a : ((double)a == (double)b) ? boost::any("None") : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return a.convert<string>().compare(b.convert<string>()) > 0 ? a : (a.convert<string>() == b.convert<string>()) ? boost::any("None") : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (double)a > b ? a : ((double)a == b) ? boost::any("None") : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (string)b.find_first_not_of("0123456789-.") != string::npos ? b : a;
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        try {
            double bdouble = stod(b.convert<string>());
            return (double)a > bdouble ? a : ((double)a == bdouble) ? boost::any("None") : boost::any(b);
        } catch (...) {
            return a;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return (string)a.find_first_not_of("0123456789-.") != string::npos ? a : boost::any((int)b);
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        try {
            double bdouble = stod(b.convert<string>());
            return (string)a.find_first_not_of("0123456789-.") != string::npos ? a : boost::any((double)b);
        } catch (...) {
            return a;
        }
    }

    return a;
}