```cpp
#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a.convert_to<int>() < (float)b ? &b : &a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a.convert_to<int>() < (double)b ? &b : &a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if (stof(a.convert_to<string>().c_str()) > a.convert_to<int>()) {
            return a;
        }
       	else if (stof(a.convert_to<string>().c_str()) < a.convert_to<int>()) {
            return b;
        }
		else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if (stof(a.convert_to<string>().c_str()) > (double)b) {
            return a;
        }
		else if (stof(a.convert_to<string>().c_str()) < (double)b) {
            return b;
        }
		else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if (stof(a.convert_to<string>().c_str()) > (float)b) {
            return a;
        }
		else if (stof(a.convert_to<string>().c_str()) < (float)b) {
            return b;
        }
		else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stof(a.convert_to<string>().c_str()) > stof(b.convert_to<string>().c_str())) {
            return a;
        }
		else if (stof(a.convert_to<string>().c_str()) < stof(b.convert_to<string>().c_str())) {
            return b;
        }
		else {
            return boost::any("None");
        }
    }
    return boost::any();
}