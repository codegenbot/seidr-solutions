#include <iostream>

double probability(int n, int m) {
    double total = (double)(n*m);
    return 1 - ((double)(m-1)) / (double)m;
}

int main() {
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << static_cast<long double>(probability(34, 24)) << std::endl;
}