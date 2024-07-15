#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double probability = 0.0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i > j) {
                probability += 1.0 / (double)(n * m);
            }
        }
    }
    
    std::cout << std::setprecision(8) << probability << std::endl;
    
    return 0;
}