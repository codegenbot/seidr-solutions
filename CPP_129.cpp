#include <iostream>
#include <vector>
#include <cassert>

std::vector<std::pair<int, int>> minPath(const std::vector<std::vector<int>>& grid, int n) {
    // Implement the minPath function as required
    // Return the path as a vector of pairs
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    // Implement the issame function
    // Return true if vectors a and b are the same, false otherwise
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {{1, 0}, {1, 1}});
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {{1, 0}, {0, 0}});
}