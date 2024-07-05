#include <vector>
#include <cassert>
#include <iostream>

std::vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + need;
    int carrotsLeft = remaining - need;
    if (carrotsLeft < 0) {
        totalEaten += carrotsLeft; // subtract the negative value to adjust totalEaten
        carrotsLeft = 0;
    }
    return {totalEaten, carrotsLeft};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0})); // Example test case
    std::cout << "All tests passed." << std::endl;
    return 0;
}