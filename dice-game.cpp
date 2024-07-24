#include <iostream>

int main() {
    int n, m;
    double prob = 0.0;
    
    // Input
    std::cin >> n >> m;
    
    // Compute probability
    prob += 1.0 / (n * m * 1.0);

    // Output
    std::cout << prob << std::endl;
    
    return 0;
}