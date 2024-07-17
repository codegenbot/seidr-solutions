#include <iostream>

double probability(int n, int m) {
    if (n == m) return 0;
    double sum = 0;
    for (int i = std::max(1, m - n + 2); i <= n; i++) {
        sum += 1 / (double)n;
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