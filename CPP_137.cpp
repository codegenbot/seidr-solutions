#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stod(a.convert_to<string>()) > stod(b.convert_to<string>())) {
            return a;
        }
        else if (stod(a.convert_to<string>()) < stod(b.convert_to<string>())) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = boost::any_cast<int>(a);
        string y = boost::any_cast<string>(b);
        if (x > stod(y)) {
            return a;
        }
        else if (stod(y) > x) {
            return b;
        }
       	else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string x = boost::any_cast<string>(a);
        int y = boost::any_cast<int>(b);
        if (stod(x) > y) {
            return a;
        }
       	else if (y > stod(x)) {
            return b;
        }
		else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        if (x > y) {
            return a;
        }
		else if (y > x) {
            return b;
        }
		else {
            return boost::any("None");
        }
    }
    else {
        return boost::any("None");
    }
}