#include <vector>

std::vector<int> eat(int number, int need, int remaining) {
    int totalEatenCarrots = number + remaining;
    
    if (totalEatenCarrots >= need) {
        totalEatenCarrots = need;
    }
    
    return {totalEatenCarrots, number + remaining - totalEatenCarrots};
}