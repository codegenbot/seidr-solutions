#include <vector>
#include <iostream>

double diceGame(int n, int m) {
    if (n <= m) {
        return 0.0;
    }
    double total = n + m - 1.0;
    return 1.0 * (n - m) / total;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(1) << diceGame(n, m) << "\n";
    return 0;
}