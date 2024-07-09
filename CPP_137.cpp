#include <stdio.h>
#include <string>
#include <algorithm>
#include <boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return a.convert_to<int>() > boost::any_cast<string>(b) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max(a, boost::any_cast<int>(b));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return a.convert_to<string>() > boost::any_cast<string>(b) ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return a.convert_to<int>() > boost::any_cast<int>(b) ? a : b;
    }
    else
        return "None";
}