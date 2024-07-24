#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double prob = 0.0;
    if (n > m) {
        prob = 1.0;
    } else if (n < m) {
        prob = static_cast<double>(n) / m;
    }
    
    std::cout << std::fixed << std::setprecision(2) << prob << std::endl;
    
    return 0;
}