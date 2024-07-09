#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double favorable_outcomes = 0.0;
    double total_outcomes = static_cast<double>(n) * static_cast<double>(m);
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i > j) {
                favorable_outcomes++;
            }
        }
    }
    
    double probability = favorable_outcomes / total_outcomes;
    
    std::cout << probability << std::endl;
    
    return 0;
}