#include <iostream>

double diceGame(int n, int m) {
    double sum = 0;
    for (int i = n+1; i <= m+n; i++) {
        sum += 1.0 / m;
    }
    return sum;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(1) << diceGame(n, m) << std::endl;
    return 0;
}