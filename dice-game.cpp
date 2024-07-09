#include <cmath>
#include <iostream>

double probability(int n, int m) {
    double total = 0; 
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j <= m; j++) {
            total += (n - i) * 1.0 / (n * m);
        }
    }
    return total;
}

int main() {
    std::cout << "The probability that Peter rolls strictly higher than Colin is: "
              << probability(34, 24) << '\n';
    return 0;
}