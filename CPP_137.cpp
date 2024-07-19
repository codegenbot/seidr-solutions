#include <any>
#include <string>
#include <cassert>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (std::any_cast<int>(a) > std::any_cast<int>(b)) {
            return a;
        } else if (std::any_cast<int>(a) < std::any_cast<int>(b)) {
            return b;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (std::any_cast<float>(a) > std::any_cast<float>(b)) {
            return a;
        } else if (std::any_cast<float>(a) < std::any_cast<float>(b)) {
            return b;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        if (std::stof(std::any_cast<std::string>(a)) > std::stof(std::any_cast<std::string>(b))) {
            return a;
        } else if (std::stof(std::any_cast<std::string>(a)) < std::stof(std::any_cast<std::string>(b))) {
            return b;
        }
    }
    return a;  // Example return value, can be adjusted based on requirements
}

int main() {
    assert(compare_one(5, 10).type() == typeid(int));
    assert(compare_one(3.14f, 2.71f).type() == typeid(float));
    assert(compare_one("7.89", "4.56").type() == typeid(std::string));

    return 0;
}