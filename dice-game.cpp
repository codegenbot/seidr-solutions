#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double total_outcomes = n * m;
    double favorable_outcomes = 0;

    for (int i = 1; i <= n; ++i) {
        favorable_outcomes += ((double) (m - 1)) / m;
    }

    double probability = favorable_outcomes / total_outcomes;

    std::cout << std::fixed << std::setprecision(2) << probability << std::endl;

    return 0;
}