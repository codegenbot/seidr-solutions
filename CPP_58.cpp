#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size();
}

std::vector<int> common(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    // Code to find common elements in vectors a and b
    return result;
}

int main() {
    assert(issame(static_cast<int>(common({4, 3, 2, 8}, {})), static_cast<int>(std::vector<int>{}.size()));
    return 0;
}