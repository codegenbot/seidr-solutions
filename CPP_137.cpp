#include <string>
#include <algorithm>
#include <iostream>

std::string compareOne(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > std::any_cast<int>(a) ? std::any(b) : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)b > std::any_cast<int>(a) ? std::any(b) : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return std::any_cast<float>(a) > b ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return std::any_cast<double>(a) > b ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string strB = std::any_cast<std::string>(b).replace(".", ",");
        return std::stod(strB) > std::stod(std::any_cast<std::string>(a)) ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        std::string strB = std::any_cast<std::string>(b).replace(".", ",");
        return std::stod(strB) > std::stod(std::any_cast<std::string>(a)) ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string strA = std::any_cast<std::string>(a);
        int intB = std::any_cast<int>(b);
        return std::stod(strA.replace(".", ",")) > intB ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string strA = std::any_cast<std::string>(a);
        std::string strB = std::any_cast<std::string>(b);
        return std::stod(strB.replace(".", ",")) > std::stod(strA.replace(".", ",")) ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        std::string strB = std::any_cast<std::string>(b).replace(".", ",");
        return (float)a > std::stod(strB) ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        std::string strB = std::any_cast<std::string>(b).replace(".", ",");
        return (double)a > std::stod(strB) ? a : b;
    }
    else {
        return "None";
    }
}