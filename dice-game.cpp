#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double probability = static_cast<double>(n - 1) / (n * m);
    
    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;
    
    return 0;
}