#include <iostream>
#include <iomanip>

double probability(int n, int m) {
    double total_outcomes = static_cast<double>(n) * static_cast<double>(m);
    double favorable_outcomes = 0.0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                favorable_outcomes++;
            }
        }
    }
    
    return favorable_outcomes / total_outcomes;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double result = probability(n, m);
    std::cout << std::fixed << std::setprecision(8) << result << std::endl;
    
    return 0;
}