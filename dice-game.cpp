```cpp
#include <iostream>

double probability(int n, int m) {
    double sum = 0;
    
    // When n > m
    for (int i = m + 1; i <= n; i++) {
        sum += (n - i + 1) / (double)n * (m - (i-1)) / (double)m;
    }
    
    // When n < m
    for (int i = 1; i < m && i <= n; i++) {
        sum += (n - (i-1)) / (double)n * (m - i) / (double)m;
    }
    
    return sum;
}

int main() {
    int n, m;
    std::cout << "Enter the number of sides for Peter's die: ";
    std::cin >> n;
    std::cout << "Enter the number of sides for Colin's die: ";
    std::cin >> m;
    double result = probability(n, m);
    std::cout << "The probability that Peter rolls strictly higher is: " << result << std::endl;
    return 0;
}