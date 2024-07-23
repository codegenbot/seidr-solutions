#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;
    double probability = 0.0;
    
    probability = (std::min(n, m) - 1) / (2.0 * n * m);
    probability += (n - std::min(n, m)) / (1.0 * n * m);

    std::cout << std::fixed << std::setprecision(2) << probability << std::endl;
    return 0;
}