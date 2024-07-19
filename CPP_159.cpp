#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

std::vector<int> eat(int number, int remaining, int need) {
    int totalEaten = number + remaining;
    int carrotsLeft = std::max(0, remaining - (need - number));
    return {totalEaten, carrotsLeft};
}

bool isSame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    int num, rem, n;
    std::cin >> num >> rem >> n;
    
    std::vector<int> result = eat(num, rem, n);
    std::cout << result[0] << " " << result[1] << std::endl;

    return 0;
}