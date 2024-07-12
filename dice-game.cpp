#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    double prob = 0.0;
    double total_ways = n * m;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            prob += (n - i) * (m - j) / total_ways;
        }
    }

    std::cout << prob << std::endl;

    return 0;
}