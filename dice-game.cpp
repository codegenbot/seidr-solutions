#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double probability = 0.0;
    if (n > m) {
        probability = 1.0;
    } else if (n < m) {
        probability = (double) n / m;
    }
    
    std::cout << probability << std::endl;
    
    return 0;
}