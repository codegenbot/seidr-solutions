#include <any>
#include <string>
#include <cassert>

template<typename T>
auto compare_one(const std::any& a, const std::any& b) {
    if (a.type() == typeid(T) && b.type() == typeid(T)) {
        if (std::any_cast<T>(a) > std::any_cast<T>(b)) {
            return &a;
        } else if (std::any_cast<T>(a) < std::any_cast<T>(b)) {
            return &b;
        }
    }
    return nullptr;
}

int main() {
    assert(*std::any_cast<std::string*>(compare_one<std::string>(std::string("1"), std::string("1"))) == std::string("1"));
    return 0;
}