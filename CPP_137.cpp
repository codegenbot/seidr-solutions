#include <iostream>
#include <string>
#include <cassert>

template <typename T>
std::string compare_one(const T& a, const T& b) {
    if (a > b) {
        return std::to_string(a);
    } else if (a < b) {
        return std::to_string(b);
    }
    return "None";
}

int main() {
    assert(compare_one(1, 1) == "None");
    
    return 0;
}