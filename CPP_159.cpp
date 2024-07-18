#include <vector>
#include <algorithm>

std::vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + std::min(need, remaining);
    int remainingCarrots = std::max(0, remaining - need);
    return {totalEaten, remainingCarrots};
}

bool issame(std::vector<int> a, std::vector<int> b);

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}