```cpp
#include <boost/any.hpp>
#include <string>

namespace boost {

any compare_one(any a, any b) {
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
       	else if (stof(a.convert_to<string>().c_str()) < (int)b) {
            return b;
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if (stof(a.convert_to<string>().c_str()) > (double)b) {
            return a;
        }
		else if (stof(a.convert_to<string>().c_str()) < (double)b) {
            return b;
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stof(a.convert_to<string>().c_str()) > stof(b.convert_to<string>().c_str())) {
            return a;
        }
		else if (stof(a.convert_to<string>().c_str()) < stof(b.convert_to<string>().c_str())) {
            return b;
        }
    }
    return any();
}

}