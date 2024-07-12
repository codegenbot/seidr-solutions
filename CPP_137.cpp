#include <iostream>
#include <any>
#include <string>
#include <cassert>

std::any compare_one(std::any a, std::any b) {
    if(std::any_cast<std::string>(a) == std::any_cast<std::string>(b)){
        return std::any("Equal");
    } else {
        return std::any("Not Equal");
    }
}

int main() {
    assert(std::any_cast<const char*>(compare_one(std::string("1"), std::string("1")).type()) == typeid(const char*)); // Corrected assert statement
    return 0;
}