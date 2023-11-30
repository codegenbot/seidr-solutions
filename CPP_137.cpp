#include <boost/any.hpp>
#include <algorithm>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        if (num1 == num2) {
            return boost::any("None");
        } else {
            return boost::any(std::max(num1, num2));
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = boost::any_cast<float>(a);
        float num2 = boost::any_cast<float>(b);
        if (num1 == num2) {
            return boost::any("None");
        } else {
            return boost::any(std::max(num1, num2));
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = boost::any_cast<std::string>(a);
        std::string str2 = boost::any_cast<std::string>(b);
        if (str1 == str2) {
            return boost::any("None");
        } else {
            return boost::any(std::max(str1, str2));
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str = boost::any_cast<std::string>(a);
        int num = boost::any_cast<int>(b);
        return boost::any("None");
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int num = boost::any_cast<int>(a);
        std::string str = boost::any_cast<std::string>(b);
        return boost::any("None");
    } else {
        return boost::any("None");
    }
}