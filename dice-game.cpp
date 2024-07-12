#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    long double probability = 0.0;
    for (double i = 1.0; i <= n; ++i) {
        for (double j = 1.0; j <= m; ++j) {
            if (i > j) {
                probability += 1.0 / (n * m);
            }
        }
    }
    
    std::cout << std::fixed << std::setprecision(10) << probability << std::endl;
    
    return 0;
}