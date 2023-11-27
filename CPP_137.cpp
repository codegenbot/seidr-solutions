#include <iostream>
#include <string>
#include <algorithm>
#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    // Check if a and b are integers
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        if (num1 > num2) {
            return num1;
        } else if (num2 > num1) {
            return num2;
        }
        return "None";
    }

    // Check if a and b are floats
    if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = boost::any_cast<float>(a);
        float num2 = boost::any_cast<float>(b);
        if (num1 > num2) {
            return num1;
        } else if (num2 > num1) {
            return num2;
        }
        return "None";
    }

    // Check if a and b are strings
    if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = boost::any_cast<std::string>(a);
        std::string str2 = boost::any_cast<std::string>(b);
        // Remove "," from string if present
        str1.erase(std::remove(str1.begin(), str1.end(), ','), str1.end());
        str2.erase(std::remove(str2.begin(), str2.end(), ','), str2.end());
        // Convert strings to float
        float num1 = std::stof(str1);
        float num2 = std::stof(str2);
        if (num1 > num2) {
            return str1;
        } else if (num2 > num1) {
            return str2;
        }
        return "None";
    }
    
    // Default case: return "None"
    return "None";
}