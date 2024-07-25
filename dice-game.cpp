#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double probability = 0.0;
    if (n > m) {
        probability = 1.0;
    } else if (n < m) {
        probability = static_cast<double>(n) / m;
    }
    
    std::cout << std::fixed << std::setprecision(2) << probability << std::endl;
    
    return 0;
}