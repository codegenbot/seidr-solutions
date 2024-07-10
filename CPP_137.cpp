```cpp
#include <boost/any.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a.convert_to<int>() > (double)b.convert_to<double>() ? b : a;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a.convert_to<double>() > (int)b.convert_to<int>() ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = boost::any_cast<std::string>(a);
        std::string str2 = boost::any_cast<std::string>(b);
        return str1 > str2 ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int num1 = boost::any_cast<int>(a);
        std::string str2 = boost::any_cast<std::string>(b);
        return num1 > std::stoi(str2) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str1 = boost::any_cast<std::string>(a);
        int num2 = boost::any_cast<int>(b);
        return std::stoi(str1) > num2 ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        double num1 = boost::any_cast<double>(a);
        std::string str2 = boost::any_cast<std::string>(b);
        return num1 > std::stod(str2) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        std::string str1 = boost::any_cast<std::string>(a);
        double num2 = boost::any_cast<double>(b);
        return std::stod(str1) > num2 ? a : b;
    }
    return boost::any("None");
}