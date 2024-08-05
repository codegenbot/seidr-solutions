#include <vector>
#include <algorithm>
#include <cassert>

std::pair<int, int> eat(int number, int need, int remaining) {
    int totalEaten = number + std::min(need, remaining);
    int carrotsLeft = std::max(0, remaining - need);
    return {totalEaten, carrotsLeft};
}

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return a.first == b.first && a.second == b.second;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}