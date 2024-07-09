#include <iostream>

double probability(int n, int m) {
    double total = (double)(n*m);
    double p = 0;

    for(int i=1; i<=m && i<n; i++){
        if(i < m) { 
            p += (n-i) * (m-i+1) /total;
        } else { 
            p += (n-m) /total;
        }
    }

    return p;
}

int main() {
    std::cout << "The probability that Peter rolls strictly higher than Colin is: "
              << probability(6, 6) << std::endl;
    return 0;
}