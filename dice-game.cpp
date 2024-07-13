#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double probability = 0.0;
    if (n > m) {
        probability = static_cast<double>(n) / (n + m);
    } else if (n < m) {
        probability = static_cast<double>(n) / (n + m);
    }
    
    std::cout << probability << std::endl;
    
    return 0;
}