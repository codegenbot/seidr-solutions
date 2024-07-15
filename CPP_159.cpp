#include <vector>
#include <algorithm>

std::vector<int> eat(int number, int remaining, int need) {
    int totalEaten = number + std::min(remaining, need);
    int carrotsLeft = std::max(0, remaining - need);
    return {totalEaten, carrotsLeft};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}