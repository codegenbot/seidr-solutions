#include <iostream>
#include <string>

template <typename T>
T compare_one(const T& a, const T& b) {
    return std::max(a, b);
}

int main() {
    std::string result = compare_one(std::string("1"), std::to_string(1));
    if (result.empty()) {
        std::cout << "None" << std::endl;
    } else {
        std::cout << result << std::endl;
    }
    
    return 0;
}