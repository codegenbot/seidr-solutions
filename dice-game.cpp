#include <iostream>

double getProbability(int n, int m) {
    double total = (double)n * m;
    double petersWins = 0;

    for (int i = m + 1; i <= n; i++) {
        petersWins += (double)(n - i + 1) / total;
    }

    return petersWins;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << getProbability(n, m);
    return 0;
}