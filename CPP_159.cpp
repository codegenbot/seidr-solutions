#include <vector>

std::vector<int> eat(int number, int need, int remaining) {
    int totalCarrotsEaten = number + need;
    int carrotsLeft = std::max(0, remaining - need);
    return {totalCarrotsEaten, carrotsLeft};
}