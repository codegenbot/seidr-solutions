#include <boost/any.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)boost::any_cast<int>(a) > (float)boost::any_cast<float>(b) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)boost::any_cast<int>(a) > (double)boost::any_cast<double>(b) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        return (int)boost::any_cast<int>(a) > boost::any_cast<std::string>(b).compare("0") ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return (float)boost::any_cast<float>(a) > (double)boost::any_cast<double>(b) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = boost::any_cast<std::string>(a);
        std::string str2 = boost::any_cast<std::string>(b);
        return str1.compare(str2) > 0 ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)boost::any_cast<int>(a) > (int)boost::any_cast<int>(b) ? a : b;
    }
    return boost::any("None");
}