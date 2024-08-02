#include <any>
#include <cassert>
#include <string>

std::any compare_one(std::any a, std::any b) {
    return b;
}

int main() {
    assert(std::any_cast<std::string>(compare_one(std::any(std::string("1")), std::any(std::string("2"))) == "2");
    return 0;
}