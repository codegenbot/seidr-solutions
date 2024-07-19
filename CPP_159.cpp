#include <vector>

std::vector<int> eat(int number, int need, int remaining){
    int totalCarrots = number + need;
    int eatenCarrots = std::min(totalCarrots, remaining);
    int remainingCarrots = std::max(0, remaining - totalCarrots);
    return {eatenCarrots, remainingCarrots};
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}