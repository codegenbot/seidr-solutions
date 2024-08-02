#include <any>
#include <cassert>
#include <string>
#include <regex>

std::any compare_one(const std::any& a, const std::any& b);

std::any compare_one(const std::any& a, const std::any& b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(std::any_cast<int>(a) > std::any_cast<int>(b))
            return a;
        else if(std::any_cast<int>(a) < std::any_cast<int>(b))
            return b;
        else
            return std::any();
    }
    else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(std::any_cast<float>(a) > std::any_cast<float>(b))
            return a;
        else if(std::any_cast<float>(a) < std::any_cast<float>(b))
            return b;
        else
            return std::any();
    }
    else if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
        float num1 = std::stof(std::regex_replace(std::any_cast<std::string&>(a), std::regex(","), "."));
        float num2 = std::stof(std::regex_replace(std::any_cast<std::string&>(b), std::regex(","), "."));
        if(num1 > num2)
            return a;
        else if(num1 < num2)
            return b;
        else
            return std::any();
    }
    return std::any();
}