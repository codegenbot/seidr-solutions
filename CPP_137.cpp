#include <any>
#include <string>
#include <typeinfo>
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
    if (a.type() == b.type()) {
        if (a.type() == typeid(int) && std::any_cast<int>(a) != std::any_cast<int>(b)) {
            return (std::any_cast<int>(a) > std::any_cast<int>(b)) ? a : b;
        } else if (a.type() == typeid(float) && std::any_cast<float>(a) != std::any_cast<float>(b)) {
            return (std::any_cast<float>(a) > std::any_cast<float>(b)) ? a : b;
        } else if (a.type() == typeid(std::string) && std::any_cast<std::string>(a) != std::any_cast<std::string>(b)) {
            return (std::stof(std::any_cast<std::string>(a)) > std::stof(std::any_cast<std::string>(b))) ? a : b;
        }
    }
    return std::any("None");
}

int main() {
    assert(std::any_cast<std::string>(compare(std::string("1"), std::string("1"))) == "None");
    assert(std::any_cast<int>(compare(3, 5)) == 5);
    assert(std::any_cast<float>(compare(2.5f, 1.8f)) == 2.5f);
    return 0;
}