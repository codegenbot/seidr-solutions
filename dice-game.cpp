#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double probability = 0;
    
    for (int i = 1; i <= n; ++i) {
        probability += ((double)(i - 1) / n) * ((double)(m) / (n + m));
        
        if (m < n) {
            probability += ((double)(n - i) / m) * ((double)(n) / (n + m));
        }
    }
    
    std::cout << probability << std::endl;
    
    return 0;
}