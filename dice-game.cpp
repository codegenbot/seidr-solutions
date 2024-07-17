#include <iostream>
#include <string>

double probability(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= m; i++) { 
        sum += (n - i) / (double)(n * m);
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
    std::cout << "The probability that Peter rolls strictly higher is: " << std::fixed << std::setprecision(6) << result << std::endl; 
    return 0;
}