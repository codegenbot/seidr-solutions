#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double probability = (double)(n-1) / (2 * n);
    
    std::cout << std::fixed << std::setprecision(7) << probability << std::endl;
    
    return 0;
}