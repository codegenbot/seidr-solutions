#include <cmath>
#include <iostream>

double probability(int n, int m) {
    double total = (double)n * m; // total possible outcomes: n*m
    for (int i = 1; i <= std::min(n, m); i++) {
        if (i < m) { 
            total -= (m - 1) / (double)n; // subtract cases where Colin rolls higher than Peter
        } else { 
            total -= (n - m + 1) / (double)n; // subtract cases where Peter and Colin are rolling the same number
        }
    }
    return total;
}

int main() {
    std::cout << "The probability that Peter rolls strictly higher than Colin is: "
              << probability(34, 24) << '\n';
    return 0;
}