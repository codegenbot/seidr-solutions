#include <any>
#include <cassert>
#include <string>

std::any compare_one(std::any a, std::any b){
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(std::any_cast<int>(a) > std::any_cast<int>(b))
            return a;
        else if(std::any_cast<int>(a) < std::any_cast<int>(b))
            return b;
    }
    else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(std::any_cast<float>(a) > std::any_cast<float>(b))
            return a;
        else if(std::any_cast<float>(a) < std::any_cast<float>(b))
            return b;
    }
    else if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
        float num1 = std::stof(std::any_cast<std::string>(a).replace(std::any_cast<std::string>(a).find(','), 1, "."));
        float num2 = std::stof(std::any_cast<std::string>(b).replace(std::any_cast<std::string>(b).find(','), 1, "."));
        if(num1 > num2)
            return a;
        else if(num1 < num2)
            return b;
    }
    assert(false);
    return std::any();
}