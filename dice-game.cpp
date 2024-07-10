#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double probability = 0.0;
    for (int i = 1; i <= n; ++i) {
        probability += static_cast<double>(i) / n * (std::min(i - 1, m) / static_cast<double>(m));
    }
    
    std::cout << std::fixed << std::setprecision(2) << probability << std::endl;
    
    return 0;
}