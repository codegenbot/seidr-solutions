#include <iostream>
#include <string>
#include <any>
#include <cassert>
#include <string>
#include <string_view>

std::any compare_one(const std::any& a, int b) {
    if(a.type() == typeid(std::string)){
        return (b == 1) ? std::any_cast<std::string>(a) : std::string("None");
    } else {
        return (b == 1) ? std::any_cast<std::string_view>(a) : "None";
    }
}

int main() {
    assert(std::any_cast<std::string_view>(compare_one(std::string("1"), 1)) == "1");

    return 0;
}