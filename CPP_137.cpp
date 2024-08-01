#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace boost;
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if (stod(b.convert_to<string>().c_str()) > stod(a.convert_to<string>().c_str())) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        if (stod(b.convert_to<string>().c_str()) > stod(a.convert_to<string>().c_str())) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        int aInt = stoi(a.convert_to<string>().erase(0, 1).erase(find(a.convert_to<string>().begin(), find(a.convert_to<string>().begin(), a.convert_to<string>().end()), ',') + 1).c_str());
        int bInt = stoi(b.convert_to<string>().erase(0, 1).erase(find(b.convert_to<string>().begin(), find(b.convert_to<string>().begin(), b.convert_to<string>().end(), ',') + 1).c_str());
        if (aInt < bInt) {
            return b;
        } else if (aInt > bInt) {
            return a;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(double) && any_cast<double>(a) > any_cast<double>(b)) {
        return a;
    } else if (any_cast<double>(b) > any_cast<double>(a)) {
        return b;
    } else {
        return boost::any("None");
    }
}