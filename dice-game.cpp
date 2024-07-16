#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    long long numerator = 0, denominator = n * m;
    for (int i = 1; i <= n; ++i) {
        numerator += 1LL * (i - 1) * m;
    }
    
    double probability = (double)numerator / (double)denominator;
    
    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;
    
    return 0;
}