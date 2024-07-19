#include <vector>
#include <cassert>

vector<int> eat(int number, int remaining, int need) {
    int totalEaten = number + remaining;
    int carrotsLeft = max(0, remaining - (need - number));
    return {totalEaten, carrotsLeft};
}

bool isSame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(isSame(eat(4, 5, 1), {5, 0}));

    return 0;
}