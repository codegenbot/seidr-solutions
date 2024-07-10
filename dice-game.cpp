#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double total_outcomes = n * m;
    double valid_outcomes = 0.0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i > j) {
                valid_outcomes += 1.0;
            }
        }
    }
    
    double probability = valid_outcomes / total_outcomes;
    
    std::cout << probability << std::endl;
    
    return 0;
}