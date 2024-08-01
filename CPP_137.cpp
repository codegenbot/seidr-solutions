```cpp
#include <boost/any.hpp>
#include <string>

using boost::any;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a.convert_to<int>() < (float)b ? &b : &a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a.convert_to<int>() < (double)b ? &b : &a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if (stof(a.convert_to<string>().c_str()) > (int)b) {
            return a;
        }
       	else {
            return b;
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if (stof(a.convert_to<string>().c_str()) > (double)b) {
            return a;
        }
		else {
            return b;
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if (stof(a.convert_to<string>().c_str()) < (float)b) {
            return a;
        }
		else {
            return b;
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if ((int)a > stof(b.convert_to<string>().c_str())) {
            return a;
        }
		else {
            return b;
        }
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        if ((double)a > stof(b.convert_to<string>().c_str())) {
            return a;
        }
		else {
            return b;
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        if ((float)a > stof(b.convert_to<string>().c_str())) {
            return a;
        }
		else {
            return b;
        }
    }
    return boost::any();
}