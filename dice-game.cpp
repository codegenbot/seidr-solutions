#include <iostream>

double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    // Count all cases where Peter's die roll is greater than Colin's
    for (int i = 1; i < m; i++) {
        p += 1.0 / total;
    }
    for (int i = m + 1; i <= n; i++) {
        p += (n - i + 1) / total;
    }

    return p;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    double result = probability(n, m);
    std::cout << result << std::endl;
    return 0;
}