#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::pair<int, int> p1, std::pair<int, int> p2) {
    return p1 == p2;
}

std::pair<int, int> eat(int number, int need, int remaining) {
    int totalEaten = number + std::min(need, remaining);
    int remainingCarrots = std::max(0, remaining - need);
    return std::make_pair(totalEaten, remainingCarrots);
}

int main() {
    assert(issame(eat(4, 5, 1) , std::make_pair(5, 0)));
    
    return 0;
}