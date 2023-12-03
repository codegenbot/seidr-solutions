#include <iostream>

double calculateProbability(int n, int m) {
    double probability = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                probability += 1.0 / (n * m);
            }
        }
    }
    return probability;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    double probability = calculateProbability(n, m);
    std::cout << probability << std::endl;
    return 0;
}