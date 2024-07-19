#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> eat(int number, int need, int remaining){
    int totalEatenCarrots = number + std::min(remaining, need);
    int carrotsLeft = std::max(0, remaining - (need - number));
    return {totalEatenCarrots, carrotsLeft};
}

int main(){
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}