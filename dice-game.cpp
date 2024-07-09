#include <iostream>

double probability(int n, int m) {
    double total = (double)(n*m);
    double p = 0;
    
    for(int i=1; i<=m-1; ++i){
        p += (double)(n-i)/total;
    }
    return p;
}

int main() {
    std::cout << "The probability that Peter rolls strictly higher than Colin is: "
              << probability(34, 24) << std::endl;
    return 0;
}