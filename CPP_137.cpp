#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = to_string(max(a.convert_to<float>(), stof(b.convert_to<string>().c_str())));
        return boost::any(str);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return max(a, b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int a_int = a.convert_to<int>();
        int b_int = b.convert_to<int>();
        if (a_int > b_int)
            return a;
        else if (a_int < b_int)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float a_float = a.convert_to<float>();
        int b_int = b.convert_to<int>();
        if (a_float > b_int)
            return a;
        else if (a_float < b_int)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int a_int = a.convert_to<int>();
        float b_float = b.convert_to<float>();
        if (a_int > b_float)
            return a;
        else if (a_int < b_float)
            return b;
        else
            return boost::any("None");
    }
    else {
        return boost::any("None");
    }
}