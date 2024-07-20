#include <any>
#include <cassert>
#include <string>
#include <iostream>

template<typename T>
const T compare_one(const std::any& a, const std::any& b) {
    if (a.type() == typeid(T) && b.type() == typeid(T)) {
        if (std::any_cast<T>(a) > std::any_cast<T>(b)) {
            return std::any_cast<T>(a);
        } else {
            return std::any_cast<T>(b);
        }
    }
    return T();
}

int main() {
    assert(std::any_cast<std::string>(compare_one<std::string>(std::string("1"), std::string("1"))) == "1");
    return 0;
}