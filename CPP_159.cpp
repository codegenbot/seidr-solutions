#include <utility>
#include <cassert>
#include <vector> // Include vector header

bool issame(std::pair<int, int> a, std::pair<int, int> b) { // Change to take pairs
    return a == b; // Simply compare the pairs
}

std::pair<int, int> eat(int x, int y, int z) {
    return {x + y, y - z};
}

int main() {
    assert(issame(eat(4, 5, 1), std::make_pair(5, 4))); // Update to use std::make_pair if needed
    return 0;
}