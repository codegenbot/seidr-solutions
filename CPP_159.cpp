#include <utility>
#include <cassert>
#include <vector> // Include vector header

bool issame(std::pair<int, int> a, std::pair<int, int> b) { // Take pairs
    return a == b; // Compare pairs
}

std::pair<int, int> eat(int x, int y, int z) { // Correct parameters
    return {x + y, y - z}; // Correct calculation
}

int main() {
    assert(issame(eat(4, 5, 1), std::make_pair(5, 4))); // Use std::make_pair
    return 0;
}