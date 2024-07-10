#include <iostream>

double diceGame(int n, int m) {
    return (double)(n - 1) / (n * m);
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(1) << diceGame(n, m) << '\n';
    return 0;
}