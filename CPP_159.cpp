#include <vector>
#include <cassert>

std::vector<int> eat(int number, int need, int remaining);

std::vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + need;
    int carrotsLeft = std::max(0, remaining - need);
    return {totalCarrots, carrotsLeft};
}

bool issame(std::vector<int> a, std::vector<int> b){