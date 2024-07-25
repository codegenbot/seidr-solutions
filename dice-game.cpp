#include <vector>
#include <iostream>

double getProbability(int n, int m) {
    double total = (double)n * m;
    double petersWinning = 0;

    for (int i = m + 1; i <= n; i++) {
        petersWinning += (double)(n - i + 1) / total;
    }

    return petersWinning;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << getProbability(n, m) << "\n";
    return 0;
}