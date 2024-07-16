#include <cassert>
#include <any>
#include <string>

std::any compare_one(const std::string &a, const std::string &b) {
    return a == b;
}

int main() {
    assert(std::any_cast<bool>(compare_one(std::string("2"), std::string("2"))) == true);

    return 0;
}