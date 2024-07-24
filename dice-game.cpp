#include <iostream>
#include <vector>

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;

    for (int i = 1; i <= std::min(n, m); i++) {
        p += (n - i) / total;
    }

    return p;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(5) << diceGame(n, m);
    return 0;