#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    float prob = 0.0f;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            prob += static_cast<float>(n - i) / n * j / m / (n * m);
        }
    }
    
    std::cout << std::fixed << std::setprecision(8) << prob << std::endl;
    
    return 0;
}