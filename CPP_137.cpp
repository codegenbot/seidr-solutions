#include <any>
#include <string>
#include <iostream>
#include <cassert>

template<typename T>
T compare_one(const std::any& a, const std::any& b) {
    if (a.type() == typeid(T) && b.type() == typeid(T)) {
        if (std::any_cast<T>(a) > std::any_cast<T>(b)) {
            return std::any_cast<T>(a);
        } else if (std::any_cast<T>(a) < std::any_cast<T>(b)) {
            return std::any_cast<T>(b);
        }
    }
    return T{}; // Default-initialized instance for non-matching types
}

int main() {
    assert(compare_one<std::string>(std::string("1"), std::string("2")) == std::string("2"));
    std::cout << "All tests passed!" << std::endl;
    return 0;
}