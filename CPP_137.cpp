#include <any>
#include <cassert>
#include <algorithm>
#include <string>

std::any compare_one(std::any a, std::any b) {
    // Check if both arguments are of the same type
    if (a.type() == b.type()) {
        if (a.type() == typeid(int)) {
            return std::any(std::max(std::any_cast<int>(a), std::any_cast<int>(b)));
        } else if (a.type() == typeid(float)) {
            return std::any(std::max(std::any_cast<float>(a), std::any_cast<float>(b)));
        } else if (a.type() == typeid(std::string)) {
            // Convert strings to float before comparison
            return std::any(std::max(std::stof(std::any_cast<std::string>(a)), std::stof(std::any_cast<std::string>(b))));
        }
    }
    // Return empty std::any if types do not match
    return std::any();
}

int main() {
    assert(std::any_cast<float>(compare_one(std::any(1.5f), std::any(2.3f))).type() == typeid(float));
    assert(std::any_cast<float>(compare_one(std::any(std::to_string(1.5f)), std::any(std::to_string(2.3f))).type() == typeid(float));
    assert(compare_one(std::any(std::to_string(1)), std::any(1)).type() == typeid(std::any));
    assert(!std::any_cast<std::any>(compare_one(std::any(std::string("1")), std::any(std::string("2")))).has_value());
    return 0;
}