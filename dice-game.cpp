#include <cmath>
#include <iostream>

double probability(int n, int m) {
    double total = 0; 
    for (int i = 1; i <= m - 1; i++) {
        total += (n - i);
    }
    return static_cast<double>(total) / ((double)(n * m));
}

int main() {
    std::cout << "The probability that Peter rolls strictly higher than Colin is: "
              << probability(34, 24) << '\n';
    return 0;
}