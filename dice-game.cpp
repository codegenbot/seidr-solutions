#include <iostream>

double diceGame(int n, int m) {
    if (n <= m) {
        return 1.0 - (double)m / (m + n - 1);
    } else {
        return (double)n / (n + m - 1);
    }
}

int main() {
    int n, m;
    std::cin >> n >> m;
    double result = diceGame(n, m);
    std::cout << std::fixed << std::setprecision(2) << result << "\n";
    return 0;
}