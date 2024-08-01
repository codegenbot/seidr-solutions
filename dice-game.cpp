#include <iostream>

double diceGame(int n, int m) {
    return (n - 1.0) / (n + m - 2.0);
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(4) << diceGame(n, m) << '\n';
    return 0;
}