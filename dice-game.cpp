#include <iostream>

int main() {
    double prob = 0.0;
    int n, m;
    std::cin >> n >> m;
    
    prob = static_cast<double>(n * (n - 1)) / (2 * n * m);

    std::cout << prob << std::endl;

    return 0;
}