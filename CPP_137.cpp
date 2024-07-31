#include <iostream>
#include <string>

template <typename T>
T compare_one(const T& a, const T& b) {
    if (a > b) {
        return a;
    } else if (a < b) {
        return b;
    }
    return T();
}

int main() {
    std::string result = compare_one(std::string("1"), std::to_string(1));
    if (result.empty()) {
        result = "None";
    }
    assert(result == "None");
    
    return 0;
}