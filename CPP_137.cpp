#include <iostream>
#include <string>
#include <boost/config.hpp>
#include <boost/any.hpp>

using namespace std;
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (boost::any_cast<int>(a) > boost::any_cast<float>(b)) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (boost::any_cast<float>(a) > boost::any_cast<int>(b)) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return a.convert<string>().compare(b.convert<string>()) > 0 ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return (boost::any_cast<float>(a) > stod(b.convert<string>().c_str())) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return stod(a.convert<string>().c_str()) > boost::any_cast<float>(b) ? a : b;
    }
    else {
        return "None";
    }
}