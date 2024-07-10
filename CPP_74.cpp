#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.empty() && b.empty();
}

int main() {
    assert(issame(std::vector<std::string>{"this"}, std::vector<std::string>{}) == true);
    return 0;
}