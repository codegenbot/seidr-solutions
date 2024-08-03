#include <boost/any.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return ((int)a > (float)b) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return ((int)a > (double)b) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        return ((int)a > boost::any_cast<std::string>(b)) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return ((float)a > (double)b) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = boost::any_cast<std::string>(a);
        std::string str2 = boost::any_cast<std::string>(b);
        return (str1 > str2) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return ((int)a > (int)b) ? a : b;
    }
    return boost::any((boost::any_cast<std::string>(boost::any("None"))));
}