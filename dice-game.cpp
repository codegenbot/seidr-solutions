#include <iostream>
#include <cmath>

double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= n; i++) {
        total -= pow(i / (n + 0.0), m);
    }
    return total;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << diceGame(n, m) << "\n";
    return 0;