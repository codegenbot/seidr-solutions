```
#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <typeinfo>

using namespace std;
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return ((int) a > (float) b) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return ((float) a > (int) b) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = a.convert<string>();
        string s2 = b.convert<string>();
        return s1.compare(s2) > 0 ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return ((float) a > stod(b.convert<string>().c_str())) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return (stod(a.convert<string>().c_str()) > (float) b) ? a : b;
    }
    else {
        return "None";
    }
}