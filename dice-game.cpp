#include <iostream>

double diceGame(int n, int m) {
    double totalOutcomes = n * m;
    double favorableOutcomes = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i && j <= m; j++) {
            favorableOutcomes++;
        }
    }

    return favorableOutcomes / totalOutcomes;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << diceGame(n, m) << std::endl;
    return 0;
}