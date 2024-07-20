#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return (a == b);
}

std::vector<int> eat(int number, int need, int remaining){
    int totalEatenCarrots = number + std::min(remaining, need);
    int carrotsLeft = std::max(0, remaining - (need - number));
    return {totalEatenCarrots, carrotsLeft};
}