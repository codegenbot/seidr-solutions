#include <iostream>
#include <vector>

bool issame(int x, int y);

std::vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + need;
    int eatenCarrots = totalCarrots > remaining ? remaining : totalCarrots;
    int carrotsLeft = remaining - eatenCarrots;
    return {eatenCarrots, carrotsLeft};
}

int main() {
    // Main function implementation goes here
    return 0;
}