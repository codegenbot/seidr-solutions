#include <vector>
#include <algorithm>

std::vector<int> eat(int number, int need, int remaining){
    int totalEatenCarrots = number + std::min(need, remaining);
    int remainingCarrots = std::max(0, remaining - need);
    return {totalEatenCarrots, remainingCarrots};
}