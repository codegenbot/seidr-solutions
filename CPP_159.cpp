#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + need;
    int carrotsLeft = remaining - need;
    if (carrotsLeft < 0) {
        totalEaten = number + remaining;
        carrotsLeft = 0;
    }
    return {totalEaten, carrotsLeft};
}

// Corrected function signature
bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    // Adjust the test case as per the expected function behavior
    assert(issame(eat(4, 5, 1), {5, 0}));
    std::cout << "All tests passed!" << std::endl;
    return 0;
}