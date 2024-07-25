#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;

    double total_outcomes = n * m;
    double peter_winning_outcomes = 0;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i > j) {
                peter_winning_outcomes++;
            }
        }
    }

    double probability = peter_winning_outcomes / total_outcomes;
    std::cout << std::fixed << std::setprecision(2) << probability << std::endl;

    return 0;
}