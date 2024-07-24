#include <vector>
#include <iostream>

double diceGame(int n, int m) {
    double sum = 1.0;
    for (int i = 1; i <= m && i < n; i++) {
        sum += 1.0 / n;
    }
    return sum;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(6) << diceGame(n, m);
    return 0;
}