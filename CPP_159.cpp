#include <iostream>
#include <cassert>
#include <utility> // Include utility header

bool issame(std::pair<int, int> a, std::pair<int, int> b) { // Update function signature
    return a == b; // Simply compare the pairs
}

std::pair<int, int> eat(int x, int y, int z) {
    return {x + y, y - z};
}

int main() {
    assert(issame(eat(4, 5, 1), std::make_pair(5, 4))); // Use std::make_pair for comparison
    return 0;
}