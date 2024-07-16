#include <any>
#include <string>
#include <cassert>

std::any compare_one(const std::string& a, const std::string& b) {
    return a;
}

int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))) == "None");
    return 0;
}