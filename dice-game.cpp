#include <vector>
#include <iostream>

double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= n && i < m; ++i) {
        total += 1.0 / m;
    }
    for (int i = m + 1; i <= n; ++i) {
        total += 1.0 / n;
    }
    return total;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << diceGame(n, m) << std::endl;
    return 0;
}