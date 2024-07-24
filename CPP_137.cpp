#include <boost/config.hpp>
#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace std;
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return any_cast<int>(a) > any_cast<int>(b) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return any_cast<float>(a) > any_cast<float>(b) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return any_cast<string>(a) > any_cast<string>(b) ? a : b;
    }
    else {
        return "None";
    }
}