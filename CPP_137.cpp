#include <iostream>
#include <string>
#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        if (num1 > num2) {
            return num1;
        } else if (num1 < num2) {
            return num2;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = boost::any_cast<float>(a);
        float num2 = boost::any_cast<float>(b);
        if (num1 > num2) {
            return num1;
        } else if (num1 < num2) {
            return num2;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = boost::any_cast<std::string>(a);
        std::string str2 = boost::any_cast<std::string>(b);
        float num1 = std::stof(str1);
        float num2 = std::stof(str2);
        if (num1 > num2) {
            return str1;
        } else if (num1 < num2) {
            return str2;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int num1 = boost::any_cast<int>(a);
        std::string str2 = boost::any_cast<std::string>(b);
        float num2 = std::stof(str2);
        if (num1 > num2) {
            return num1;
        } else if (num1 < num2) {
            return str2;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str1 = boost::any_cast<std::string>(a);
        int num2 = boost::any_cast<int>(b);
        float num1 = std::stof(str1);
        if (num1 > num2) {
            return str1;
        } else if (num1 < num2) {
            return num2;
        } else {
            return "None";
        }
    } else {
        return "None";
    }
}

int main() {
    boost::any result = compare_one(1, 2.5);
    std::cout << boost::any_cast<float>(result) << std::endl;

    result = compare_one(1, "2,3");
    std::cout << boost::any_cast<std::string>(result) << std::endl;

    result = compare_one("5,1", "6");
    std::cout << boost::any_cast<std::string>(result) << std::endl;

    result = compare_one("1", 1);
    std::cout << boost::any_cast<std::string>(result) << std::endl;

    return 0;
}