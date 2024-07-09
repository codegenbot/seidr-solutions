#include <cmath>
#include <iostream>

double probability(int n, int m) {
    return (n-m)/(n*m);
}

int main() {
    std::cout << "The probability that Peter rolls strictly higher than Colin is: "
              << probability(34, 24) << '\n';
    return 0;
}