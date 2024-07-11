#include <iostream>

int main() {
    int n, m;
    double probability = 0.0;
    
    std::cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m - 1; ++j) {
            probability += static_cast<double>((n - i) * j) / (n * m);
        }
    }
    
    std::cout << probability << std::endl;

    return 0;
}