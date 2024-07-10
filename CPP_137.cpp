#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return a.as<int>() > b.as<int>() ? a : (b.as<int>() > a.as<int>() ? b : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return a.as<float>() > b.as<float>() ? a : (b.as<float>() > a.as<float>() ? b : boost::any("None"));
    } else if ((a.type() == typeid(int) || a.type() == typeid(float)) &&
               (b.type() == typeid(string))) {
        return b.as<string>();
    } else if ((a.type() == typeid(string)) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        return a;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return a.as<string>() > b.as<string>() ? a : (b.as<string>() > a.as<string>() ? b : boost::any("None"));
    }
    return boost::any();
}