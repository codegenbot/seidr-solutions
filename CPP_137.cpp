#include <iostream>
#include <any>
#include <string>
#include <cassert>
#include <string_view>

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
    } else if (a.type() == typeid(std::string_view) && b.type() == typeid(std::string_view)) {
        if (std::any_cast<std::string_view>(a).empty() && std::any_cast<std::string_view>(b).empty()) {
            return std::string_view();
        }
    }
    return std::any();
}

int main() {
    assert(std::any_cast<std::string_view&>(compare_one(std::string_view("1"), std::string_view("1"))).empty()); 
    
    return 0;
}