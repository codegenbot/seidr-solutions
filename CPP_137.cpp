#include <cassert>
#include <any>
#include <string>

std::any compare_one(const std::string &a, const std::string &b) {
    return b;
}

int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1"), std::string("2"))) == "2");

    return 0;
}