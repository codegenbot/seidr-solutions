```cpp
#include <iostream>
#include <iomanip>
#include <sstream>

double probability(int n, int m) {
    double total = (double)(n*m);
    return 1 - ((double)(m-1)) / (double)m;
}

int main() {
    std::ostringstream oss;
    oss << std::fixed << setprecision(5) << probability(34, 24);
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << oss.str() << std::endl;
}