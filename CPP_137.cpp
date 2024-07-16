#include <iostream>
#include <any>
#include <string>
#include <cassert>

std::any compare_one(const std::any& a, const std::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (std::any_cast<int>(a) > std::any_cast<int>(b)) {
            return a;
        } else if (std::any_cast<int>(a) < std::any_cast<int>(b)) {
            return b;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (std::any_cast<float>(a) > std::any_cast<float>(b)) {
            return a;
        } else if (std::any_cast<float>(a) < std::any_cast<float>(b)) {
            return b;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        if (std::any_cast<std::string>(a).empty() && std::any_cast<std::string>(b).empty()) {
            return std::string();
        }
    }
    return std::any();
}

int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))).empty()); 
    
    return 0;
}