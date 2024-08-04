#include <cassert>
#include <any>

std::any compare_one(const std::string& s1, const std::string& s2) {
    // Add your implementation for compare_one function
    return s1;
}

int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))) == std::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))));
    return 0;
}