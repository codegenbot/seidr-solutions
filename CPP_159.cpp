#include <vector>

std::pair<int, int> eat(int number, int need, int remaining) {
    int totalEaten = number + std::min(need, remaining);
    int carrotsLeft = std::max(0, remaining - need);
    return {totalEaten, carrotsLeft};
}

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    auto result = eat(a, b, c);
    std::cout << result.first << " " << result.second << std::endl;
    return 0;
}