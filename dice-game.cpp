#include <iostream>

double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= min(n, m); i++) {
        total -= 1.0 / n;
    }
    if (n > m)
        total += 1.0 / m;
    return total;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(10) << diceGame(n, m);
    return 0;
}