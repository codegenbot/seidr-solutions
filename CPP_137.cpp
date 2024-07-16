```
#include <boost/variant.hpp>
#include <boost/any.hpp>
#include <string>

boost::variant<int, float, std::string> compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convertible_to<int>(), (float)b.convertible_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        std::string str = (std::string)a.convertible_to<std::string>();
        float f = (float)b.convertible_to<float>();
        return (f > std::stof(str)) ? boost::variant<int, float, std::string>(f) : boost::variant<int, float, std::string>(str);
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = (std::string)a.convertible_to<std::string>();
        std::string str2 = (std::string)b.convertible_to<std::string>();
        return (std::stof(str2) > std::stof(str1)) ? boost::variant<int, float, std::string>(str2) : (std::stof(str1) == std::stof(str1)) ? boost::variant<int, float, std::string>("None") : boost::variant<int, float, std::string>(str1);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int i = (int)a.convertible_to<int>();
        std::string str = (std::string)b.convertible_to<std::string>();
        return (std::stof(str) > i) ? boost::variant<int, float, std::string>(str) : (i == std::stof(str)) ? boost::variant<int, float, std::string>("None") : boost::variant<int, float, std::string>(i);
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str = (std::string)a.convertible_to<std::string>();
        int i = (int)b.convertible_to<int>();
        return (std::stof(str) > i) ? boost::variant<int, float, std::string>(str) : (i == std::stof(str)) ? boost::variant<int, float, std::string>("None") : boost::variant<int, float, std::string>(i);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float f = (float)a.convertible_to<float>();
        int i = (int)b.convertible_to<int>();
        return (f > i) ? boost::variant<int, float, std::string>(f) : (i == f) ? boost::variant<int, float, std::string>("None") : boost::variant<int, float, std::string>(i);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int i1 = (int)a.convertible_to<int>();
        int i2 = (int)b.convertible_to<int>();
        return (i2 > i1) ? boost::variant<int, float, std::string>(i2) : (i1 == i2) ? boost::variant<int, float, std::string>("None") : boost::variant<int, float, std::string>(i1);
    }
    else {
        return "None";
    }
}