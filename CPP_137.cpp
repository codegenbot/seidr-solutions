#include <iostream>
#include <string>
#include <boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (b.convert_to<string>()) > to_string((int)a.convert_to<int>())
               ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = (string)b.convert_to<string>();
        float num1 = (float)a.convert_to<float>(), num2 = stof(str);
        return num1 > num2 ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int num = (int)b.convert_to<int>();
        string str1 = (string)a.convert_to<string()}, str2 = to_string(num);
        return str1 > str2 ? a : (str1 == str2 ? boost::any("None") : b);
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = (string)a.convert_to<string>(), str2 = to_string((float)b.convert_to<float>());
        return str > str2 ? a : (str == str2 ? boost::any("None") : b);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = (string)a.convert_to<string>(), str2 = (string)b.convert_to<string>();
        return str1 > str2 ? a : (str1 == str2 ? boost::any("None") : b);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float num1 = (float)a.convert_to<float>(), num2 = (int)b.convert_to<int>();
        return num1 > num2 ? a : b;
    }
    return boost::any("None");
}