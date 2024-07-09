#include <iostream>

double probability(int n, int m) {
    double total = (double)n * m;
    double p = (m - 1) / total;

    return p;
}

int main() {
    std::cout << "The probability that Peter rolls strictly higher than Colin is: "
              << probability(6, 6) << std::endl;
    return 0;
}