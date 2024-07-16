#include <iostream>
#include <any>
#include <string>

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
    } 
    return std::any(); // Return std::any instead of std::string
}

int main() {
    auto result = std::any_cast<int>(compare_one(std::any(1), std::any(2)));
    assert(result == 2); // Assert the correct output based on the comparison
    
    return 0;
}