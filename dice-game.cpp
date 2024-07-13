#include <iostream>

double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;

    for (int i = 1; i < n; i++) {
        p += (double)i / total;
    }

    return p;
}

int main() {
    // Read input from user
    int n, m;
    std::cin >> n >> m;
    
    // Calculate and print the result
    double result = probability(n, m);
    std::cout << "The probability is: " << 1.0 - result << std::endl;
    
    return 0;
}