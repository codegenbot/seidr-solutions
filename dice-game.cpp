#include <iostream>

double probability(int n, int m) {
    double tie = 1.0 / m;
    double sum = 0;
    for (int i = std::max(m, 1); i <= n; i++) {
        if(i != m)
            sum += (i - m) / (double)n;
    }
    return sum + tie;
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