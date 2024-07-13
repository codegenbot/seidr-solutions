#include <iostream>
#include <iomanip>

double diceGame(int n, int m) {
    double sum = 0.0;
    for (int i = m + 1; i <= n; i++) {
        sum += 1.0 / n;
    }
    return sum;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(6) << diceGame(n, m) << std::endl;
    return 0;
}