#include <iostream>

double probability(int n, int m) {
    double total = (double)(n*m);
    return (m-1.0)/total;
}

int main() {
    std::cout << "The probability that Peter rolls strictly higher than Colin is: "
              << probability(34, 24) << std::endl;
    return 0;
}