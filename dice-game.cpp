#include <iostream>

double probability(int n, int m) {
    double total = (double)n * m;
    return (m - 1.0) / total; 
}

int main() {
    int n, m;
    std::cout << "Enter Peter's die size: ";
    std::cin >> n;
    std::cout << "Enter Colin's die size: ";
    std::cin >> m;
    double result = probability(n, m);
    std::cout << "Probability: " << result << std::endl;
    return 0;