#include <iostream>
#include <string>
#include <cassert>

template <typename T>
std::string compare_one(const T& a, const T& b) {
    if (a > b) {
        return a;
    } else if (a < b) {
        return b;
    }
    return "None";
}

int main() {
    assert(compare_one(std::string("1"), std::to_string(1)) == "None");
    
    return 0;
}