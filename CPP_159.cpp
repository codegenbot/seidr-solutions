#include <vector>

std::vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + need;
    int eatenCarrots = std::min(totalCarrots, remaining);
    int leftCarrots = std::max(totalCarrots - remaining, 0);
    
    return {eatenCarrots, leftCarrots};
}