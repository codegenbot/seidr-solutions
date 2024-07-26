#include <vector>
#include <cassert>

vector<int> eat(int number, int need, int remaining) {
    int totalEatenCarrots = number + std::min(need, remaining);
    int carrotsLeft = std::max(0, remaining - need);
    return {totalEatenCarrots, carrotsLeft};
}

bool issame(vector<int> a, vector<int> b) {
    // compare vectors a and b elements and return true if they are the same, otherwise false
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    // other code
}