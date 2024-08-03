#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + need;
    int eatenCarrots = std::min(totalCarrots, remaining);
    int remainingCarrots = std::max(0, remaining - totalCarrots);
    
    return {eatenCarrots, remainingCarrots};
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}