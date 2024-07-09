```cpp
#include <iostream>
#include <iomanip>

double probability(int n, int m) {
    double total = (double)(n*m);
    return 1 - ((double)(m-1)) / (double)m;
}

int main() {
    std::cout << "The probability that Peter rolls strictly higher than Colin is: "
              << std::fixed << setprecision(5) << (long long)probability(34, 24)
              << std::endl;
}