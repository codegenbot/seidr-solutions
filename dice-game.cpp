#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    long double probability = 0.0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            probability += static_cast<long double>(n - i) / n * static_cast<long double>(m) / (n * m);
        }
    }
    
    std::cout << probability << std::endl;
    
    return 0;
}