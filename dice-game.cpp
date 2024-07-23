#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;
    double total_outcomes = n * m;
    double unfavorable_outcomes = 0;
    for (int i = 1; i <= n; ++i) {
        unfavorable_outcomes += (double)(m - i) / m;
    }
    double probability = 1 - (unfavorable_outcomes / total_outcomes);
    std::cout << std::fixed << std::setprecision(6) << probability << '\n';
    return 0;
}