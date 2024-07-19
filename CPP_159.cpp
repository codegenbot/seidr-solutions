#include <vector>
#include <cassert>

std::vector<int> eat_carrots(int number, int remaining, int need) {
    int totalEaten = number + remaining;
    int carrotsLeft = std::max(0, remaining - (need - number));
    return {totalEaten, carrotsLeft};
}

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(is_same(eat_carrots(4, 5, 1), {5, 0}));

    return 0;
}