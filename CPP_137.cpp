#include <iostream>
#include <any>
#include <string>
#include <cassert>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int int_a = std::any_cast<int>(a);
        int int_b = std::any_cast<int>(b);
        if (int_a == int_b) {
            return std::any("Equal");
        } else {
            return std::any("Not Equal");
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float float_a = std::any_cast<float>(a);
        float float_b = std::any_cast<float>(b);
        if (float_a == float_b) {
            return std::any("Equal");
        } else {
            return std::any("Not Equal");
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str_a = std::any_cast<std::string>(a);
        std::string str_b = std::any_cast<std::string>(b);
        if (str_a == str_b) {
            return std::any("Equal");
        } else {
            return std::any("Not Equal");
        }
    } else if ((a.type() == typeid(int) && b.type() == typeid(std::string)) || (a.type() == typeid(std::string) && b.type() == typeid(int))) {
        int int_val = std::any_cast<int>(a);
        std::string str_val = std::any_cast<std::string>(b);
        if (std::to_string(int_val) == str_val) {
            return std::any("Equal");
        } else {
            return std::any("Not Equal");
        }
    }
    
    return std::any("None");
}

int main() {
    assert(std::any_cast<const char*>(compare_one(std::string("1"), std::string("1")).type()) == typeid(const char*));
    return 0;
}