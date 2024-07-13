#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double total_ways = static_cast<double>(n) * m;
    double count = 0.0;
    
    for (int i = 1; i <= n; ++i) {
        count += static_cast<double>(i - 1) * m;
    }

    double probability = count / total_ways;
    
    std::cout << probability << std::endl;
    
    return 0;
}