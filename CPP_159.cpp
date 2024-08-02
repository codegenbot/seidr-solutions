#include <vector>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + min(need, remaining);
    int carrotsLeft = max(0, remaining - need);
    return {totalEaten, carrotsLeft};
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}