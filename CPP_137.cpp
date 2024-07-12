#include <iostream>
#include <any>
#include <string>
#include <cassert>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int val_a = std::any_cast<int>(a);
        int val_b = std::any_cast<int>(b);
        return val_a == val_b ? std::any("Equal") : std::any("Not Equal");
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float val_a = std::any_cast<float>(a);
        float val_b = std::any_cast<float>(b);
        return val_a == val_b ? std::any("Equal") : std::any("Not Equal");
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string val_a = std::any_cast<std::string>(a);
        std::string val_b = std::any_cast<std::string>(b);
        return val_a == val_b ? std::any("Equal") : std::any("Not Equal");
    } else if ((a.type() == typeid(int) && b.type() == typeid(std::string)) || (a.type() == typeid(std::string) && b.type() == typeid(int))) {
        std::string val_a = std::any_cast<std::string>(a);
        int val_b = std::any_cast<int>(b);
        return std::stoi(val_a) == val_b ? std::any("Equal") : std::any("Not Equal");
    }
    return std::any("None");
}

int main() {
    assert(std::any_cast<std::string_view>(compare_one(std::string("1"), std::string("1"))) != std::string_view("None"));
    return 0;
}