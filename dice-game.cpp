#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    double total_outcomes = n * m;
    double favor_outcomes = 0.0;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i && j <= m; ++j) {
            favor_outcomes += 1.0;
        }
    }

    double probability = favor_outcomes / total_outcomes;
    std::cout << probability << std::endl;

    return 0;
}