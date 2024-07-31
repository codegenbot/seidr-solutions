#include <any>
#include <cassert>
#include <algorithm>
#include <string>
#include <iostream>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == b.type()) {
        if (a.type() == typeid(int)) {
            return std::any(std::max(std::any_cast<int>(a), std::any_cast<int>(b)));
        } else if (a.type() == typeid(float)) {
            return std::any(std::max(std::any_cast<float>(a), std::any_cast<float>(b)));
        } else if (a.type() == typeid(std::string)) {
            return std::any(std::to_string(std::max(std::stof(std::any_cast<std::string>(a)), std::stof(std::any_cast<std::string>(b))));
        }
    }
    return std::any();
}

int main() {
    assert(std::any_cast<float>(compare_one(1.5f, 2.3f)).type() == typeid(float));
    assert(std::stof(std::any_cast<std::string>(compare_one(std::to_string(1.5f), std::to_string(2.3f))) == std::stof("2.3"));
    assert(compare_one(std::to_string(1), std::to_string(1)).type() == typeid(float));
    assert(!std::any_cast<float>(compare_one("1", 1)).has_value());
    assert(!std::any_cast<std::string>(compare_one("1", "2")).has_value());
    return 0;
}