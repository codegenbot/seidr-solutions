#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double probability = 0.0;
    for (int i = 1; i <= n; ++i) {
        probability += (double)(n - i) / n * (double)m / (n + m);
    }

    std::cout << probability << std::endl;

    return 0;
}