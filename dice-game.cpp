#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double favorable_outcomes = 0;
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i > j) {
                favorable_outcomes += 1;
            }
        }
    }
    
    double probability = favorable_outcomes / (n * m);
    
    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;
    
    return 0;
}