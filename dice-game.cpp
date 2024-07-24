#include <iostream>

int main() {
    double prob = 0.0;
    int n, m;
    std::cin >> n >> m;
    
    prob = (n - 1.0) * m / (n * m * 1.0);

    std::cout << prob << std::endl;

    return 0;
}