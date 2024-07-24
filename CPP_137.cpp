#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return ((int)a) > (float)b ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = any_cast<string>(a);
        string s2 = any_cast<string>(b);
        return s1.compare(s2) > 0 ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return (float)a > stod(any_cast<string>(b).c_str()) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return stod(any_cast<string>(a).c_str()) > (float)b ? a : b;
    }
    else {
        return "None";
    }
}