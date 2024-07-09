#include <vector>
#include <iostream>
#include <cassert>

std::vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + std::min(need, remaining);
    int carrotsLeft = std::max(0, remaining - need);
    return {totalEaten, carrotsLeft};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    int num, n, r;
    std::cin >> num >> n >> r;
    assert(issame(eat(num, n, r), {5, 0}));
    return 0;
}