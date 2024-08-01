```cpp
#include <iostream>
#include <cmath>

double calculateProbability(int n, int m) {
    double total = (n + m - 1);
    for(int i=1; i<=m; i++) {
        total += 1.0;
    }
    return (m * 1.0 / total);
}

int main() {
    int n = 6; 
    int m = 4;
    double probability = calculateProbability(n, m);
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << probability << std::endl;
    return 0;
}