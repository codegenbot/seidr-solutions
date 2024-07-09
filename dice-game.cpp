#include <iostream>

double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < m && j < i; j++) {
            p += 1.0 / total;
        }
    }

    return p;
}

int main() {
    if (probability(6, 6) > 1 || probability(6, 6) < 0) {
        std::cout << "Error: Probability must be between 0 and 1." << std::endl;
    } else {
        std::cout << "The probability that Peter rolls strictly higher than Colin is: "
                  << probability(6, 6) << std::endl;
    }
    return 0;
}