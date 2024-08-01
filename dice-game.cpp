```cpp
#include <iostream>

double calculateProbability(int n, int m) {
    double total = (n + m - 1);
    if(m > n) {
        std::swap(n, m); // swap n and m to ensure n is the larger die
    }
    return ((m-1) * 1.0 / total);
}

int main() {
    int n = 6; 
    int m = 4;
    double probability = calculateProbability(n, m);
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << probability << std::endl;
    return 0;
}