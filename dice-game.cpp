#include <iostream>
#include <string>
#include <iomanip>

int main() {
    int n, m;
    std::cout << "Enter the number of sides for Peter's die: ";
    std::cin >> n;
    std::cout << "Enter the number of sides for Colin's die: ";
    std::cin >> m;
    double p = 0.0;
    double total = (double)(n - 1) * m; 
    for (int i = 1; i <= m-1; i++) {
        p += (n-i)/(double)n; 
    }
    std::cout << "The probability that Peter rolls strictly higher than Colin is: ";
    std::cout << std::fixed << std::setprecision(10) << 1 - p << std::endl;
    return 0;
}