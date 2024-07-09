#include <cmath>
#include <iostream>

long double probability(int n, int m) {
    long double total = 0; 
    for (int i = 1; i <= m; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (j > i) {
                total += 1.0;
            }
        }
    }
    return total / (n * m);
}

int main() {
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " 
              << std::fixed << std::setiosflags(std::ios_base::floatfield | std::ios_base::fixed) << std::setprecision(9) << probability(34, 24);
    return 0;
}