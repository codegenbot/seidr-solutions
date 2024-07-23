#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < m; ++j) {
            if (i > j) {
                count++;
            }
        }
    }
    
    double probability = static_cast<double>(count) / (n * m);
    std::cout << probability << std::endl;
    
    return 0;
}