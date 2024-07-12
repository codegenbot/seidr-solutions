#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double probability = (n - 1.0) / (2 * n);
    
    std::cout << probability << std::endl;
    
    return 0;
}