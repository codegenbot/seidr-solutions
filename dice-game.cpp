#include <iostream>

double diceGame(int n, int m) {
    if(n <= m) return 1 - (m * 1.0) / (n * 1.0);
    else return (n - m) * 1.0 / n;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(10) << diceGame(n, m) << std::endl;
    return 0;
}