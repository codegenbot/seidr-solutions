#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double probability = 0.0;
    double epsilon = 1e-9;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i > j) {
                probability += 1.0 / (n * m);
            }
        }
    }
    
    std::cout << std::fixed << std::setprecision(8) << probability + epsilon << std::endl;
    
    return 0;
}