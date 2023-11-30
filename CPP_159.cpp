#include <vector>
#include <cassert>

std::vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + need;
    int carrotsLeft = remaining - need;
    if (carrotsLeft < 0) {
        carrotsLeft = 0;
    }
    return {totalEaten, carrotsLeft};
}

int main() {
    assert (eat(4, 5, 1) == std::vector<int>{5, 0});
    return 0;
}