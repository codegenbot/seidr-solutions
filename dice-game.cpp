#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    double favorable_outcomes = 0;

    for (double i = 1; i <= n; ++i) {
        for (double j = 1; j <= m; ++j) {
            if (i > j) {
                favorable_outcomes += 1;
            }
        }
    }

    double probability = favorable_outcomes / (n * m);

    std::cout << probability << std::endl;

    return 0;
}