#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double probability = 0.0;
    int total_outcomes = n * m;
    double increment = 1.0 / total_outcomes;
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i > j) {
                probability += increment;
            }
        }
    }
    
    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;
    
    return 0;
}