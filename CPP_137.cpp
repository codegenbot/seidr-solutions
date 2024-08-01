```cpp
#include <boost/any.hpp>
#include <string>

using boost::any;
using namespace std;

any compare_one(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a < b ? &b : &a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a < b ? &b : &a;
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(float) || b.type() == typeid(double))) {
        double val = stod(b.convert_to<string>().c_str());
        if ((int)a < val) {
            return a;
        }
       	else if ((int)a > val) {
            return b;
        }
		else {
            return any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        double val1 = stod(a.convert_to<string>().c_str());
        double val2 = stod(b.convert_to<string>().c_str());
        if (val1 < val2) {
            return a;
        }
		else if (val1 > val2) {
            return b;
        }
		else {
            return any("None");
        }
    }
	return any();
}