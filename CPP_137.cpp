#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stod(a.convert<string>().c_str()) > stod(b.convert<string>().c_str())) {
            return a;
        } else if (stod(a.convert<string>().c_str()) < stod(b.convert<string>().c_str())) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = boost::any_cast<int>(a);
        string y = boost::any_cast<string>(b);
        if (x > stod(y.c_str())) {
            return a;
        } else if (stod(y.c_str()) > x) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string x = boost::any_cast<string>(a);
        int y = boost::any_cast<int>(b);
        if (stod(x.c_str()) > y) {
            return a;
        } else if (y > stod(x.c_str())) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        if (x > y) {
            return a;
        } else if (y > x) {
            return b;
        } else {
            return boost::any("None");
        }
    }

    return b;
}