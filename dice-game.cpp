#include <iostream>
#include <cmath>

double getProbability(int n, int m) {
    double total = (double)n * m;
    return (n - 1) / total;
}

int main() {
    int n, m;
    std::cout << "Enter number of sides for Peter's die: ";
    std::cin >> n;
    std::cout << "Enter number of sides for Colin's die: ";
    std::cin >> m;
    std::cout << "Probability that Peter rolls strictly higher than Colin is: " << getProbability(n, m) << "\n";
}