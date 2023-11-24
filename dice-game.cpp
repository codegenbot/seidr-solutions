#include <iostream>
#include <iomanip>

double probabilityOfHigherRoll(int n, int m) {
    long long int totalOutcomes = n * m;
    long long int favorableOutcomes = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                favorableOutcomes++;
            }
        }
    }

    return (double)favorableOutcomes / totalOutcomes;
}

int main() {
    int n, m;
    std::cin >> n >> m;

    double probability = probabilityOfHigherRoll(n, m);
    std::cout << std::fixed << std::setprecision(7) << probability << std::endl;

    return 0;
}