#include <vector>

std::vector<int> eat(int number, int need, int remaining) {
    int totalEatenCarrots = number + remaining;
    
    if (totalEatenCarrots >= need) {
        totalEatenCarrots = need;
    }
    
    return {totalEatenCarrots, number + remaining - totalEatenCarrots};
}

int main() {
    assert(eat(4, 5, 1) == std::vector<int>({5, 0}));
    // Add more test cases here
    
    return 0;
}