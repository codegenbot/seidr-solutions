#include <iostream>
#include <any>
#include <cassert>
#include <string>

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
        std::string str_a = std::any_cast<std::string>(a); 
        std::string str_b = std::any_cast<std::string>(b); 
        str_a.replace(str_a.find(','), 1, ".");
        str_b.replace(str_b.find(','), 1, ".");
        float num1 = stof(str_a);
        float num2 = stof(str_b);
        if(num1 > num2)
            return a;
        else if(num1 < num2)
            return b;
        else
            return std::any();
    }
    return std::any();
}

int main() {
    assert(compare_one(std::string("1"), std::string("1")).has_value() == false);
    return 0;
}