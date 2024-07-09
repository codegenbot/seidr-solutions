#include <vector>

std::pair<int, int> eat(int number, int need, int remaining) {
    int totalEaten = number + std::min(need, remaining);
    int carrotsLeft = std::max(0, remaining - need);
    return {totalEaten, carrotsLeft};
}

int main() {
    int num, n, r;
    std::cin >> num >> n >> r;
    auto result = eat(num, n, r);
    std::cout << result.first << " " << result.second << std::endl;
    return 0;
}