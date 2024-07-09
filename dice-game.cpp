#include <iostream>

double probability(int n, int m) {
    double total = (double)(n*m);
    double p = 0;

    for(int i=1; i<n; i++){
        p += (n-i) * (m/i) /total;
    }

    return p;
}

int main() {
    std::cout << "The probability that Peter rolls strictly higher than Colin is: "
              << probability(6, 6) << std::endl;
    return 0;
}