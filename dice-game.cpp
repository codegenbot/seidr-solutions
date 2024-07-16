#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double probability = 0.0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            probability += double(std::min(i - 1, m) * std::min(j, n)) / (n * m);
        }
    }
    
    std::cout << probability << std::endl;
    
    return 0;
}