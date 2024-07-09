#include <vector>

std::pair<int, int> eat(int number, int need, int remaining) {
    int totalEaten = number + std::min(need, remaining);
    int carrotsLeft = std::max(0, remaining - need);
    return {totalEaten, carrotsLeft};
}

int main() {
    int number, need, remaining;
    std::cin >> number >> need >> remaining;
    auto result = eat(number, need, remaining);
    std::cout << result.first << " " << result.second;
    return 0;
}