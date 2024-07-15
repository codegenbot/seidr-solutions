#include <vector>
#include <algorithm>

std::pair<int, int> eat(int number, int remaining, int need) {
    int totalEaten = number + std::min(remaining, need);
    int carrotsLeft = std::max(0, remaining - need);
    return {totalEaten, carrotsLeft};
}

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}