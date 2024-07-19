#include <iostream>
#include <vector>
#include <cassert>

std::pair<int, int> eat(int number, int remaining, int need) {
    int totalEaten = number + remaining;
    int carrotsLeft = std::max(0, remaining - (need - number));
    return {totalEaten, carrotsLeft};
}

bool isSame(std::pair<int, int> a, std::pair<int, int> b) {
    return a == b;
}

int main() {
    assert(isSame(eat(4, 5, 1), {5, 0}));
    
    return 0;
}