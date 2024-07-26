#include <vector>
#include <cassert>

vector<int> eat(int number, int need, int remaining) {
    int totalEatenCarrots = number + std::min(need, remaining);
    int carrotsLeft = std::max(0, remaining - need);
    return {totalEatenCarrots, carrotsLeft};
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    // other code
}