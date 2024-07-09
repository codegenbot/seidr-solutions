#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> eat(int number, int need, int eaten) {
    int totalEaten = number + std::min(need, eaten);
    int carrotsLeft = std::max(0, eaten - need);
    return {totalEaten, carrotsLeft};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}