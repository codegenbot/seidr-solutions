#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> eat(int number, int need, int remaining) {
    int totalCarrotsEaten = number + std::min(need, remaining);
    int carrotsLeft = std::max(0, remaining - need);
    return {totalCarrotsEaten, carrotsLeft};
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}