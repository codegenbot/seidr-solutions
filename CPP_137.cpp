#include <any>
#include <cassert>
#include <string>
#include <algorithm>

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
        std::string str1 = std::any_cast<std::string>(a);
        str1.replace(str1.find(','), 1, ".");
        float num1 = std::stof(str1);
        
        std::string str2 = std::any_cast<std::string>(b);
        str2.replace(str2.find(','), 1, ".");
        float num2 = std::stof(str2);
        
        if(num1 > num2)
            return a;
        else if(num1 < num2)
            return b;
        else
            return std::any();
    }
    return std::any();
}

assert(std::any_cast<std::string>(compare_one(std::string("1"), std::any(1))).empty());