#include <iostream>
#include <string>
#include <cassert>
#include <boost/any.hpp>

template <typename T>
std::string compare_one(const std::string& a, const std::string& b) {
    if (a > b) {
        return a;
    } else if (a < b) {
        return b;
    }
    return "None";
}

int main() {
    assert(std::string(compare_one(std::string("1"), std::to_string(1))) == "None");
    
    return 0;
}