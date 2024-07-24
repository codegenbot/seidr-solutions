#include <iostream>

double probability(int n, int m) {
    double sum = 0;
    for (int i = n + 1; i <= m * 2; i++) {
        sum += 1.0 / min(n, m);
    }
    return 1 - sum;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(10) << probability(n, m) << std::endl;
    return 0;
}