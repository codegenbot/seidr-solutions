#include <iostream>
#include <string>
#include <boost/config.hpp>
#include <boost/any.hpp>

using namespace std;
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return a.convert<int>() > b.convert<float>() ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a.convert<float>() > b.convert<int>() ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = any_cast<string>(a);
        string s2 = any_cast<string>(b);
        return s1.compare(s2) > 0 ? a : b;
    }
    else {
        return "None";
    }
}