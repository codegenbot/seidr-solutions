#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    return (a[0] == b[0] && a[1] == b[1]);
}

std::vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + std::min(need, remaining);
    int carrotsLeft = std::max(0, remaining - need);
    return {totalEaten, carrotsLeft};
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    
    return 0;
}