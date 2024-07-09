```cpp
#include <cmath>
#include <iostream>
#include <iomanip>

double probability(int n, int m) {
    double total = (double)(n*m);
    return 1 - ((double)(m-1)) / (double)m;
}

int main() {
    std::cout << "The probability that Peter rolls strictly higher than Colin is: ";
    std::cout << fixed;
    std::cout << setprecision(5) << probability(34, 24) << '\n';
    return 0;
}