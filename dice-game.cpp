#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double probability = 0.0;
    if (n > m) {
        probability = (n - 1.0) / n;
    } else if (m > n) {
        probability = (n * 0.5) / m;
    }
    
    std::cout << probability << std::endl;
    
    return 0;
}