#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return (a == b);
}

int main() {
    assert(issame(bf("Jupiter", "Mars"), {"Mercury", "Venus", "Earth"}));
    return 0;
}