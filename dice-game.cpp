#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    int favorable_outcomes = 0;
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i > j) {
                favorable_outcomes += 1;
            }
        }
    }
    
    double probability = static_cast<double>(favorable_outcomes) / (n * m);
    probability = std::round(probability * 1e8) / 1e8;
    
    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;
    
    return 0;
}