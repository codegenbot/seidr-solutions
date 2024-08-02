#include <string>
#include <any>
#include <cassert>

template <typename T>
std::any compare_one(T a, T b) {
    if (a == b) {
        return std::any("None");
    } else {
        return (a > b) ? std::any(a) : std::any(b);
    }
}

std::any compare(std::any a, std::any b) {
    if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return compare_one(std::any_cast<std::string>(a), std::any_cast<std::string>(b));
    }
    return std::any("None");
}

int main() {
    assert(std::any_cast<std::string>(compare(std::string("1"), std::string("1"))) == "None");
    return 0;
}