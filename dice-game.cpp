#include <cmath>
#include <iostream>

double probability(int n, int m) {
    int max = std::min(n, m);
    double total = 0;
    for(int i = 1; i < max; i++) {
        total += (i/(double)n) * (i/(double)m);
    }
    return 1 - total;
}

int main() {
    std::cout << "The probability that Peter rolls strictly higher than Colin is: "
              << probability(34, 24) << '\n';
    return 0;
}