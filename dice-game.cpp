#include <iostream>

double probability(int n, int m) {
    double total = (double)(n*m);
    double p = 0;

    for(int i=1; i<=m; i++){
        for(int j=i+1; j<=n; j++){
            p += 1.0 / total;
        }
    }

    return p;
}

int main() {
    std::cout << "The probability that Peter rolls strictly higher than Colin is: "
              << probability(6, 6) << std::endl;
    return 0;
}