#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max(a.convert_to<float>(), b.convert_to<int>());
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (max(a.convert_to<string>(), b.convert_to<string>()) == a ? a : b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int a_int = a.convert_to<int>();
        string b_str = b.convert_to<string>();
        if (stof(b_str) > a_int)
            return b;
        else
            return "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int a_int = a.convert_to<int>();
        string b_str = b.convert_to<string>();
        if (stof(b_str) > a_int)
            return b;
        else
            return "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float a_float = a.convert_to<float>();
        string b_str = b.convert_to<string>();
        if (stof(b_str) > a_float)
            return b;
        else
            return "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float a_float = a.convert_to<float>();
        string b_str = b.convert_to<string>();
        if (stof(b_str) > a_float)
            return b;
        else
            return "None";
    }
    else {
        return "None";
    }
}