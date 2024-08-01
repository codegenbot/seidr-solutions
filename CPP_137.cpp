#include <boost/any.hpp>
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)std::max((double)a.convert_to<int>(), b.convert_to<double>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return std::max(a, b);
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return (std::string)std::max(a.convert_to<std::string>(), b.convert_to<std::string>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int num = a.convert_to<int>();
        std::string str = b.convert_to<std::string>();
        return (num > std::stoi(str)) ? a : ((num < std::stoi(str)) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        int num = a.convert_to<std::string>() != "" ? std::stoi(a.convert_to<std::string>()) : 0;
        int str_num = b.convert_to<int>();
        return ((num > str_num) ? a : ((num < str_num) ? b : boost::any("None")));
    }
    else {
        return boost::any("None");
    }
}