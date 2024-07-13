#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = to_string(b.convert_to<string>());
        string result = (stod(str) > a.convert_to<float())) ? str : "None";
        return boost::any(result);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (a.convert_to<string>() == b.convert_to<string>())
            return boost::any("None");
        else
            return max(a, b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = to_string(b.convert_to<string>());
        int a_int = a.convert_to<int>();
        string result = (stod(str) > a_int) ? str : "None";
        return boost::any(result);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        int b_int = b.convert_to<int>();
        float a_float = a.convert_to<float>();
        string result = (a_float > b_int) ? to_string(a_float) : "None";
        return boost::any(result);
    }
    else
        return boost::any("None");
}