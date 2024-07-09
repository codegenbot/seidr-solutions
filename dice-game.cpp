#include <iostream>

double probability(int n, int m) {
    return (1.0 * (n - m)) / ((double)(n*m));
}

int main() {
    std::cout << "The probability that Peter rolls strictly higher than Colin is: "
              << probability(34, 24) << std::endl;
    return 0;
}