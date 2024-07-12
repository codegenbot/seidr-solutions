#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double prob = 0.0;
    double denominator = static_cast<double>(n * m);
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            prob += static_cast<double>((n - i) * (m - j)) / denominator;
        }
    }
    
    std::cout << prob << std::endl;
    
    return 0;
}