#include <iostream>
#include <any>
#include <string>
#include <cassert>

template <typename T>
std::string compare_one(const T& t1, const T& t2) {
    return (t1 == t2) ? "Equal" : "Not Equal";
}

std::string compare_one(const std::any& t1, const std::any& t2) {
    if (t1.type() == t2.type()) {
        if (t1.type() == typeid(std::string)) {
            return (std::any_cast<std::string>(t1) == std::any_cast<std::string>(t2)) ? "Equal" : "Not Equal";
        }
    }
    return "Not Equal";
}

int main() {
    assert(compare_one(1, 1) == "Equal");
    assert(compare_one(std::string("abc"), std::string("def")) == "Not Equal");
    assert(std::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))) == "Equal");
    return 0;
}