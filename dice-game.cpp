#include <iostream>
#include <iomanip>

double probability(int n, int m) {
    double total = 0; 
    int count = 0;
    for (int i = 1; i <= m; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (j > i) {
                ++count;
            }
        }
    }
    return (double)count / (n * m);
}

int main() {
    std::cout << "The probability that Peter rolls strictly higher than Colin is: "
              << probability(34, 24);
    return 0;
}