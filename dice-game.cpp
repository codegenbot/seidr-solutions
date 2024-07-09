#include <cmath>
#include <iostream>

double probability(int n, int m) {
    double total = 0; // total favorable outcomes: sum(1/n*(n-1)*(n-2)*...*(n-m+1)) for i=1 to min(n,m)
    if(m > n) { 
        std::swap(n, m); 
    }
    for (int i = 1; i <= m; i++) {
        total += pow((double)n/i, i);
    }
    return total;
}

int main() {
    std::cout << "The probability that Peter rolls strictly higher than Colin is: "
              << probability(34, 24) << '\n';
    return 0;
}