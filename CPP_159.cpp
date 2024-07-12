#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + remaining;
    int eatenCarrots = std::min(totalCarrots, need);
    int carrotsLeft = std::max(0, totalCarrots - need);
    return {eatenCarrots, carrotsLeft};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    
    return 0;
}