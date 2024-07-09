#include <cmath>
#include <iostream>

double probability(int n, int m) {
    double total = 0; // total favorable outcomes: sum(m-1)/n for i=1 to min(n,m)
    for (int i = 1; i <= std::min(n, m); i++) {
        total += (m - i) / (double)n;
    }
    return (total - m / n) / (1.0 * (n - 1));
}

int main() {
    std::cout << "The probability that Peter rolls strictly higher than Colin is: "
              << probability(34, 24) << '\n';
    return 0;
}