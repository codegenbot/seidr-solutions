#include <boost/any.hpp>
#include <string>
#include <algorithm>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        if (num1 > num2) {
            return num1;
        } else if (num2 > num1) {
            return num2;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = boost::any_cast<float>(a);
        float num2 = boost::any_cast<float>(b);
        if (num1 > num2) {
            return num1;
        } else if (num2 > num1) {
            return num2;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = boost::any_cast<std::string>(a);
        std::string str2 = boost::any_cast<std::string>(b);
        // Remove commas from the strings
        str1.erase(std::remove(str1.begin(), str1.end(), ','), str1.end());
        str2.erase(std::remove(str2.begin(), str2.end(), ','), str2.end());
        if (str1 > str2) {
            return str1;
        } else if (str2 > str1) {
            return str2;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str = boost::any_cast<std::string>(a);
        int num = boost::any_cast<int>(b);
        // Remove commas from the string
        str.erase(std::remove(str.begin(), str.end(), ','), str.end());
        if (str > std::to_string(num)) {
            return str;
        } else if (std::to_string(num) > str) {
            return num;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int num = boost::any_cast<int>(a);
        std::string str = boost::any_cast<std::string>(b);
        // Remove commas from the string
        str.erase(std::remove(str.begin(), str.end(), ','), str.end());
        if (std::to_string(num) > str) {
            return num;
        } else if (str > std::to_string(num)) {
            return str;
        } else {
            return "None";
        }
    } else {
        return "None";
    }
}