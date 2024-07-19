#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return b;
    }
    if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        return a > boost::stof(s) ? a : "None";
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        int i = boost::any_cast<int>(a);
        return i > boost::any_cast<int>(b) ? a : "None";
    }
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string s = boost::any_cast<string>(a);
        return boost::stof(s) > b ? a : "None";
    }
    if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string s = boost::any_cast<string>(a);
        return boost::stof(s) > b ? a : "None";
    }
    return "None";
}