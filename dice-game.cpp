#include <iostream>

int main() {
    int n, m;
    double probability = 0.0;
    
    std::cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i > j) {
                probability += 1.0 / n / m;
            }
        }
    }
    
    std::cout << probability << std::endl;

    return 0;
}