#include <iostream>
#include <string>
#include <algorithm>
#include <boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = stoi((string)a.convert_to<string>());
        string y = (string)b.convert_to<string>();
        return x > stof(y) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = (string)a.convert_to<string>();
        string y = (string)b.convert_to<string>();
        if (stof(x) > stof(y))
            return a;
        else if (stof(x) < stof(y))
            return b;
        else
            return boost::any("None");
    } else {
        return boost::any("None");
    }
}