#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    int total_outcomes = n * m;
    int favorable_outcomes = 0;
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i > j) {
                ++favorable_outcomes;
            }
        }
    }
    
    double probability = static_cast<double>(favorable_outcomes) / total_outcomes;
    
    std::cout << std::fixed << std::setprecision(2) << probability << std::endl;
    
    return 0;
}