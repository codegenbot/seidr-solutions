#include<iostream>

double probabilityOfHigherRoll(int n, int m) {
    double totalOutcomes = n * m;
    double favorableOutcomes = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                favorableOutcomes += 1.0;
            }
        }
    }

    return favorableOutcomes / totalOutcomes;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout.precision(9);
    std::cout << std::fixed << probabilityOfHigherRoll(n, m) << std::endl;
    return 0;
}