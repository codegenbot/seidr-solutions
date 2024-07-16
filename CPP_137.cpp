```cpp
#include <boost/any.hpp>
#include <boost/variant.hpp>
#include <string>
#include <iostream>

using namespace boost;

variant<int, float, string> compare_one(any a, any b) {
    if (a.type() == type_id<int>() && b.type() == type_id<float>()) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == type_id<float>() && b.type() == type_id<string>()) {
        string str = (string)a.convert_to<string>();
        float f = (float)b.convert_to<float>();
        return (f > stod(str)) ? variant<int, float, string>(f) : variant<int, float, string>(str);
    }
    else if (a.type() == type_id<string>() && b.type() == type_id<string>()) {
        string str1 = (string)a.convert_to<string>();
        string str2 = (string)b.convert_to<string>();
        return (stod(str2) > stod(str1)) ? variant<int, float, string>(str2) : (stod(str1) == stod(str2)) ? variant<int, float, string>("None") : variant<int, float, string>(str1);
    }
    else if (a.type() == type_id<int>() && b.type() == type_id<string>()) {
        int i = (int)a.convert_to<int>();
        string str = (string)b.convert_to<string>();
        return (stod(str) > i) ? variant<int, float, string>(str) : (i == stod(str)) ? variant<int, float, string>("None") : variant<int, float, string>(i);
    }
    else if (a.type() == type_id<string>() && b.type() == type_id<int>()) {
        string str = (string)a.convert_to<string>();
        int i = (int)b.convert_to<int>();
        return (stod(str) > i) ? variant<int, float, string>(str) : (i == stod(str)) ? variant<int, float, string>("None") : variant<int, float, string>(i);
    }
    else if (a.type() == type_id<float>() && b.type() == type_id<int>()) {
        float f = (float)a.convert_to<float>();
        int i = (int)b.convert_to<int>();
        return (f > i) ? variant<int, float, string>(f) : (i == f) ? variant<int, float, string>("None") : variant<int, float, string>(i);
    }
    else if (a.type() == type_id<int>() && b.type() == type_id<int>()) {
        int i1 = (int)a.convert_to<int>();
        int i2 = (int)b.convert_to<int>();
        return (i2 > i1) ? variant<int, float, string>(i2) : (i1 == i2) ? variant<int, float, string>("None") : variant<int, float, string>(i1);
    }
    else {
        return "None";
    }
}