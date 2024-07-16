#include <iostream>
double probability(int n, int m) {
    double result = 0.0;
    if (n <= m) return 0; 

    for (int i = 1; i < m; ++i) { 
        result += ((n - m + 1) / (double)n) * (1.0 / m);
    }
    return result;
}

int main() {
    int n, m;
    std::cout << "Enter the number of sides for Peter's die: ";
    std::cin >> n;
    std::cout << "Enter the number of sides for Colin's die: ";
    std::cin >> m;
    double result = probability(n, m);
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << result << std::endl;
    return 0;
}