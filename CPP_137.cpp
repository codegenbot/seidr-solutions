```cpp
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : (b.convert_to<boost::any>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : (b.convert_to<boost::any>());
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        istringstream iss((string)b);
        float b_float;
        iss >> b_float;
        return (string)a > b_float ? a : (b.convert_to<boost::any>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        istringstream iss((string)a);
        float a_float;
        iss >> a_float;
        return a_float > (float)b ? a : (b.convert_to<boost::any>());
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string a_str = (string)a;
        string b_str = (string)b;
        return a_str.compare(b_str) > 0 ? a : (b.convert_to<boost::any>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any((int)a > (int)b ? a : b);
    }
    else {
        return boost::any("None");
    }
}