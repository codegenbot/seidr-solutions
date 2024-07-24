#include <boost/any.hpp>
#include <string>
#include <iostream>
#include <cstdlib>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any((int)a < (int)b ? b : a);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any((float)a > (float)b ? &b : &a);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return boost::any(((std::string)a).compare((std::string)b) > 0 ? a : b);
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any((int)a < (float)b ? boost::any(b) : a);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any((float)a > (int)b ? a : b);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        return boost::any(((std::string)a).compare(to_string((int)b)) > 0 ? a : boost::any("None"));
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        return boost::any(to_string((int)a).compare((std::string)b) > 0 ? a : b);
    } else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        return boost::any(boost::any_cast<float>(a) > stod((std::string)b) ? a : b);
    }
    return boost::any("None");
}