#include <iostream>
#include <iomanip>

int main() {
    long long n, m;
    std::cin >> n >> m;
    
    long double probability = 0.0;
    for (long long i = 1; i <= n; ++i) {
        for (long long j = 1; j <= m; ++j) {
            if (i > j) {
                probability += 1.0 / (long double)(n * m);
            }
        }
    }
    
    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;
    
    return 0;
}