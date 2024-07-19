#include <any>
#include <cassert>
#include <string>

std::any compare_one(const std::any& a, const std::any& b) {
    assert(a.type() == b.type());

    if (a.type() == typeid(int) || a.type() == typeid(float)) {
        if (std::any_cast<double>(a) > std::any_cast<double>(b))
            return a;
        else if (std::any_cast<double>(a) < std::any_cast<double>(b))
            return b;
        else
            return std::any();
    }
    else if (a.type() == typeid(std::string)) {
        if (std::any_cast<std::string>(a) > std::any_cast<std::string>(b))
            return a;
        else if (std::any_cast<std::string>(a) < std::any_cast<std::string>(b))
            return b;
        else
            return std::any(std::string(""));
    }

    return std::any();
}

int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))) == "");

    return 0;
}