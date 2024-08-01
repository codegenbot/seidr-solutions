```cpp
#include <boost/any.hpp>
#include <string>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) b > (int) a ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float) b > (float) a ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return str2 > str1 ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int int_val = boost::any_cast<int>(a);
        string str = boost::any_cast<string>(b);
        return int_to_float(int_val) > atof(str.c_str()) ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        int int_val = boost::any_cast<int>(b);
        return atof(str.c_str()) > int_to_float(int_val) ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float float_val = boost::any_cast<float>(a);
        string str = boost::any_cast<string>(b);
        return float_val > atof(str.c_str()) ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::any_cast<string>(a);
        float float_val = boost::any_cast<float>(b);
        return atof(str.c_str()) > float_val ? b : a;
    }
    else {
        return "None";
    }
}

float int_to_float(int val) {
    return (float)val;
}