```cpp
#include <iostream>
#include <cmath>

double calculateProbability(int n, int m) {
    double total = (n + m - 1);
    double probability = 0;
    
    for (int i = 1; i <= m - 1; i++) {
        probability += (m * 1.0 / total) * (n - i) / (n - 1);
    }
    
    return probability;
}

int main() {
    int n = 6; 
    int m = 4;
    double probability = calculateProbability(n, m);
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << probability << std::endl;
    return 0;
}