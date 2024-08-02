#include <any>
#include <string>
#include <iostream>

template <typename T>
std::any compare_one(const T& a, const T& b) {
    if (a == b) {
        return std::any();
    } else {
        return (a > b) ? std::any(a) : std::any(b);
    }
}

std::any compare(const std::any& a, const std::any& b) {
    if (a.type() == b.type()) {
        if (a.type() == typeid(int) && std::any_cast<int>(a) != std::any_cast<int>(b)) {
            return (std::any_cast<int>(a) > std::any_cast<int>(b)) ? a : b;
        } else if (a.type() == typeid(float) && std::any_cast<float>(a) != std::any_cast<float>(b)) {
            return (std::any_cast<float>(a) > std::any_cast<float>(b)) ? a : b;
        } else if (a.type() == typeid(std::string) && std::any_cast<std::string>(a) != std::any_cast<std::string>(b)) {
            return (std::stof(std::any_cast<std::string>(a)) > std::stof(std::any_cast<std::string>(b))) ? a : b;
        }
    }
    return std::any();
}

int main() {
    assert(std::any_cast<std::string>(compare_one("1", "1")).has_value() == false);
    
    return 0;
}