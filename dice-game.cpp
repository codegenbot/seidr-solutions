#include <iostream>

double probability(int n, int m) {
    double total = (double)(n*m);
    double p = 0;

    for(int i=1; i<=m; i++){
        p += std::min(n-1, i)/(total * 1.0);
    }

    return p;
}

int main() {
    std::cout << "The probability that Peter rolls strictly higher than Colin is: "
              << probability(6, 6) << std::endl;
    return 0;
}