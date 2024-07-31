#include <any>
#include <string>
#include <cassert>
#include <algorithm>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return std::any(std::max(std::any_cast<int>(a), std::any_cast<int>(b)));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return std::any(std::max(std::any_cast<float>(a), std::any_cast<float>(b)));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return std::any(std::max(std::stof(std::any_cast<std::string>(a)), std::stof(std::any_cast<std::string>(b))));
    }
    return std::any();
}

int main() {
    assert(std::any_cast<float>(compare_one(1.5f, 2.3f)) == 2.3f);
    return 0;
}