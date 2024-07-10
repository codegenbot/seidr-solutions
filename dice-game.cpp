#include <iostream>

int main() {
    int n, m;
    std::cout << "Enter number of sides for Peter's die: ";
    std::cin >> n;
    std::cout << "Enter number of sides for Colin's die: ";
    std::cin >> m;

    double result = 0.0;
    
    for (int i = 1; i < n; ++i) {
        result += (double(1)/n) * (double(1)/m);
    }

    std::cout << "Probability that Peter rolls strictly higher than Colin: " << 1 - result << std::endl;

    return 0;
}