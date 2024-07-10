#include <cassert>
#include <any>
#include <string>

std::any compare_one(std::string s, std::any a) {
    return std::string("None");
}

int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1"), std::any(1))) == "None");
    // Add more test cases here
    return 0;
}