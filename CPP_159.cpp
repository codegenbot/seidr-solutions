#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

std::vector<int> eat(int number, int remaining, int need) {
    int totalEaten = number + remaining;
    int carrotsLeft = std::max(0, remaining - (need - number));
    return {totalEaten, carrotsLeft};
}

bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(isSame(eat(4, 5, 1), {5, 0}));

    return 0;
}