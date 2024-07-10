#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return (float)a > boost::any_cast<string>(b) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return *boost::any_cast<string>(a) > *boost::any_cast<string>(b) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int int_val = boost::any_cast<int>(a);
        string str_val = boost::any_cast<string>(b);
        return int_val > std::stof(str_val) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float float_val = boost::any_cast<float>(a);
        int int_val = boost::any_cast<int>(b);
        return float_val > int_val ? a : b;
    }
    return boost::any("None");
}