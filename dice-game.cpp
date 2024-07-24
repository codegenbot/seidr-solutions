#include <iostream>

int main() {
    double prob = 0.0;
    int n, m;
    std::cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            prob += double(std::max(n-i, m-j) + 1) / (n * m);
        }
    }

    std::cout << prob << std::endl;
    
    return 0;
}