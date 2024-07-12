#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double total_ways = (double)n * m;
    double prob = 0.0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            prob += ((double)(n-i) * (double)(m-j)) / total_ways;
        }
    }
    
    std::cout << prob << std::endl;
    
    return 0;
}