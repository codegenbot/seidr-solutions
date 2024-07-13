#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double probability = 0.0;
    for (int i = 1; i <= n; ++i) {
        probability += (double)(n-i) / n * (double)m / (m + n);
    }
    
    std::cout << std::fixed << std::setprecision(2) << probability << std::endl;
    
    return 0;
}