#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    long double probability = 0.0L;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i > j) {
                probability += static_cast<long double>((n - i) * j) / (n * m);
            }
        }
    }
    
    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;
    
    return 0;
}