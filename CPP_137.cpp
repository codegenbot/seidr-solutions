```cpp
#include <boost/any.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a < b ? &b : &a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a < b ? &b : &a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if ((int)a > stof(b.convert_to<string>().c_str())) {
            return a;
        }
       	else if ((int)a < stof(b.convert_to<string>().c_str())) {
            return b;
        }
		else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > b ? &a : &b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > b ? &a : &b;
    }
   	else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if (stof(a.convert_to<string>().c_str()) < b) {
            return a;
        }
		else if (stof(a.convert_to<string>().c_str()) > b) {
            return b;
        }
		else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if (stof(a.convert_to<string>().c_str()) < b) {
            return a;
        }
		else if (stof(a.convert_to<string>().c_str()) > b) {
            return b;
        }
		else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stof(a.convert_to<string>().c_str()) < stof(b.convert_to<string>().c_str())) {
            return a;
        }
		else if (stof(a.convert_to<string>().c_str()) > stof(b.convert_to<string>().c_str())) {
            return b;
        }
		else {
            return boost::any("None");
        }
    }
	return boost::any();
}

int main() {
    assert (boost::any_cast<string>(compare_one(string("1"), 1)) == "None");
    return 0;
}