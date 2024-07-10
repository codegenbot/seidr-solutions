```cpp
#include <iostream>

int main() {
    int n, m;
    std::cout << "Enter the number of sides for Peter's die: ";
    std::cin >> n;
    std::cout << "Enter the number of sides for Colin's die: ";
    std::cin >> m;
    double p = 0.0;
    if(n > m) {
        p += (1.0 - (double)m / n) * ((n-1) / n);
    }
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << 1 - p << std::endl;
    return 0;
}