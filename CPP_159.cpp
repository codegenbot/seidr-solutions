#include <vector>

vector<int> eat(int number, int need, int remaining) {
    int totalEatenCarrots = number + min(need, remaining);
    int carrotsLeft = max(0, remaining - need);
    return {totalEatenCarrots, carrotsLeft};
}

int main() {
    // main function implementation
    return 0;
}