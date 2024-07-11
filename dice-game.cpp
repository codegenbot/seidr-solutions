#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double probability = 0.0;
    
    for (int i = 1; i <= n; ++i) {
        probability += static_cast<double>(i - 1) / n;
    }
    
    probability *= static_cast<double>(m) / n;
    
    std::cout << probability << std::endl;
    
    return 0;
}