#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double prob = 0.0;
    for (int i = 1; i <= n-1; ++i) {
        for (int j = 1; j <= m-1; ++j) {
            if (i > j) {
                prob += 1.0 / (double)(n * m);
            }
        }
    }
    
    std::cout << prob << std::endl;
    
    return 0;
}