#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    long double probability = 0.0;
    if (n > m) {
        probability = (n - 1) / (2.0 * n);
    } else {
        probability = (m + 1) / (2.0 * m);
    }
    
    std::cout << probability << std::endl;
    
    return 0;
}