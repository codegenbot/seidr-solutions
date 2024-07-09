#include <cmath>
#include <iostream>
#include <iomanip>

long double probability(int n, int m) {
    long double total = 0; 
    for (int i = 1; i <= m; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (j > i) {
                total += 1.0;
            }
        }
    }
    return std::min(1.0, total / (n * m));
}

int main() {
    std::cout << std::fixed << std::setprecision(10) << "The probability that Peter rolls strictly higher than Colin is: "
              << probability(34, 24) << '\n';
    return 0;
}