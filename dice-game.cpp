#include <cmath>
#include <iostream>

double probability(int n, int m) {
    double total = 0; // total favorable outcomes: sum(i-1)/n for i=1 to min(n,m)
    for (int i = 1; i <= std::min(n, m); i++) {
        if (i < m) { 
            total += (i - 1) / (double)n;
        } else { 
            total += (n - m + 1) / (double)n; 
        }
    }
    return total;
}

int main() {
    std::cout << "The probability that Peter rolls strictly higher than Colin is: "
              << probability(34, 24) << '\n';
    return 0;
}