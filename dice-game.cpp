#include <iostream>

double probability(int n, int m) {
    double p = 0;
    for (int i = 1; i < m; i++) { 
        for (int j = i + 1; j <= n; j++) { 
            p += 1.0 / (n * m);
        }
    }
    return p;
}

int main() {
    int n, m;
    std::cout << "Enter the number of sides on Peter's die: ";
    std::cin >> n;
    std::cout << "Enter the number of sides on Colin's die: ";
    std::cin >> m;
    double result = probability(n, m);
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << result << std::endl;
    return 0;