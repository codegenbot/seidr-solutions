#include <vector>
#include <iostream>

double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= m && i < n; ++i) {
        total += 1.0 / n;
    }
    return total;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << fixed << setprecision(6) << diceGame(n, m) << std::endl;
    return 0;
}