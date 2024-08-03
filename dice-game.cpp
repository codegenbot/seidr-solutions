#include <iostream>

double diceGame(int n, int m) {
    double total = (n + m);
    return 1.0 - ((double)m / total);
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(2) << diceGame(n, m) << std::endl;
    return 0;
}