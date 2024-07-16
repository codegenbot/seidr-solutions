```cpp
#include <boost/variant.hpp>
#include <boost/any.hpp>

using boost::variant;
using boost::any;

variant<int, float, string> compare_one(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = (string)a.convert_to<string>();
        float f = (float)b.convert_to<float>();
        return (f > stof(str)) ? variant<int, float, string>(f) : variant<int, float, string>(str);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = (string)a.convert_to<string>();
        string str2 = (string)b.convert_to<string>();
        return (stof(str2) > stof(str1)) ? variant<int, float, string>(str2) : (stof(str1) == stof(str1)) ? variant<int, float, string>("None") : variant<int, float, string>(str1);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int i = (int)a.convert_to<int>();
        string str = (string)b.convert_to<string>();
        return (stof(str) > i) ? variant<int, float, string>(str) : (i == stof(str)) ? variant<int, float, string>("None") : variant<int, float, string>(i);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = (string)a.convert_to<string>();
        int i = (int)b.convert_to<int>();
        return (stof(str) > i) ? variant<int, float, string>(str) : (i == stof(str)) ? variant<int, float, string>("None") : variant<int, float, string>(i);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float f = (float)a.convert_to<float>();
        int i = (int)b.convert_to<int>();
        return (f > i) ? variant<int, float, string>(f) : (i == f) ? variant<int, float, string>("None") : variant<int, float, string>(i);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int i1 = (int)a.convert_to<int>();
        int i2 = (int)b.convert_to<int>();
        return (i2 > i1) ? variant<int, float, string>(i2) : (i1 == i2) ? variant<int, float, string>("None") : variant<int, float, string>(i1);
    }
    else {
        return "None";
    }
}