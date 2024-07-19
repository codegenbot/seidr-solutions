#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> eat(int number, int remaining, int need) {
    int totalEaten = number + remaining;
    int carrotsLeft = std::max(0, remaining - (need - number));
    return {totalEaten, carrotsLeft};
}

bool isSame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(isSame(eat(4, 5, 1), std::vector<int>{5, 0}));
    
    return 0;
}