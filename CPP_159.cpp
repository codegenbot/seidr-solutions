#include <algorithm>
#include <cassert>
#include <vector>

std::vector<int> eat(int number, int need, int remaining) {
    int totalEatenCarrots = number + std::min(need, remaining);
    int remainingCarrots = std::max(0, remaining - need);
    return {totalEatenCarrots, remainingCarrots};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
}