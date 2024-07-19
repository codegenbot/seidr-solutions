#include <iostream>
#include <cassert>
#include <any>

std::any compare_one(const std::string& str1, const std::string& str2) {
    if (str1 == str2) {
        return std::string("Equal");
    }
    return std::string("Not Equal");
}

int main() {
    assert(std::any_cast<std::string>(compare_one("1", "1")) == "Equal");
    // Add more test cases as needed
    return 0;
}