#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    int favorable_outcomes = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < m; ++j) {
            favorable_outcomes++;
        }
    }
    
    double probability = static_cast<double>(favorable_outcomes) / (n * m);
    std::cout << std::fixed << std::setprecision(9) << probability << std::endl;
    
    return 0;
}