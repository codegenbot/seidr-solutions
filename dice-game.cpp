#include <cmath>
#include <iostream>

double probability(int n, int m) {
    double total = (double)(n*m);
    double favorable_outcomes = 0;
    
    for (int i = m; i < n; i++) {
        favorable_outcomes += (double)(i - m + 1);
    }
    
    return favorable_outcomes / total;
}

int main() {
    std::cout << "The probability that Peter rolls strictly higher than Colin is: "
              << probability(34, 24) << '\n';
    return 0;
}