#include <cmath>
#include <iostream>

double probability(int n, int m) {
    double total = 0; 
    for (int i = m; i < n; i++) {
        total += 1.0 / m - 1.0 / n;
    }
    return total;
}

int main() {
    std::cout << "The probability that Peter rolls strictly higher than Colin is: "
              << probability(34, 24) << '\n';
    return 0;
}