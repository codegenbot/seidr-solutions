#include <cmath>
#include <iostream>

double probability(int n, int m) {
    double total = 0; 
    for (int i = 1; i <= m; i++) {
        for (int j = i + 1; j <= n; j++) {
            total += 1.0 / (n * m);
        }
    }
    return total;
}

int main() {
    std::cout << "The probability that Peter rolls strictly higher than Colin is: "
              << probability(34, 24) << '\n';
    return 0;
}