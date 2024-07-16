#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double probability = 0.0;
    probability = (n-1) * m / (double)(n * m);
    
    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;
    
    return 0;
}