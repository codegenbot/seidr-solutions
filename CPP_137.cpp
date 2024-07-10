#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return (string)b.convert_to<string>() > to_string((float)a.convert_to<float>()) ? b : "None";
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (string)a.convert_to<string>() > (string)b.convert_to<string>() ? a : (string)b.convert_to<string>() == (string)a.convert_to<string>() ? "None" : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (int)a.convert_to<int>() > stoi((string)b.convert_to<string>()) ? a : "None";
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a.convert_to<float>() > (int)b.convert_to<int>() ? a : "None";
    }
}