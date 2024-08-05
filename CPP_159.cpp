#include <vector>
#include <cassert>

std::vector<int> eat(int number, int remaining, int need){
    int totalEaten = number + std::min(need, remaining);
    int carrotsLeft = std::max(0, remaining - need);
    return std::vector<int>{totalEaten, carrotsLeft};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}