#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    double prob = 0.0;
    for (int i = 1; i <= n; ++i) {
        prob += (double)i / n * (double)(m - i) / m;
    }

    std::cout << prob << std::endl;

    return 0;
}