#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool areEqual(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(areEqual(std::vector<std::string>{"this"}, std::vector<std::string>{}) == true);
    assert(areEqual(std::vector<std::string>{"hello", "world"}, std::vector<std::string>{"hello", "world"}) == true);
    assert(areEqual(std::vector<std::string>{"apple", "orange"}, std::vector<std::string>{"banana", "grape"}) == false);

    return 0;
}