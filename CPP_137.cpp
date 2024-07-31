#include <iostream>
#include <string>
#include <any>

template <typename T>
std::string compare_one(const T& a, const T& b) {
    if (a > b) {
        return a;
    } else if (a < b) {
        return b;
    }
    return std::string();
}

int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1"), std::to_string(1))) == "");
    
    return 0;
}