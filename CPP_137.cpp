#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        if (num1 > num2) {
            return num1;
        } else if (num1 < num2) {
            return num2;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = boost::any_cast<float>(a);
        float num2 = boost::any_cast<float>(b);
        if (num1 > num2) {
            return num1;
        } else if (num1 < num2) {
            return num2;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = boost::any_cast<std::string>(a);
        std::string str2 = boost::any_cast<std::string>(b);
        // Remove any commas in the strings
        str1.erase(std::remove(str1.begin(), str1.end(), ','), str1.end());
        str2.erase(std::remove(str2.begin(), str2.end(), ','), str2.end());
        // Convert the strings to float
        float num1 = boost::lexical_cast<float>(str1);
        float num2 = boost::lexical_cast<float>(str2);
        if (num1 > num2) {
            return str1;
        } else if (num1 < num2) {
            return str2;
        }
    }
    return "None";
}