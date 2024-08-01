
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<std::string>& b) {
    return std::vector<int>(a.begin(), a.end()) == std::vector<int>(b.begin(), b.end());
}

int main() {
    assert(issame(std::vector<int>{9, 4, 8}, {"Nine", "Eight", "Four"}));
}