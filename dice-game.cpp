#include <iostream>

double probability(int n, int m) {
    double total = (n + m - 1);
    return (m * 1.0) / total;
}

int main() {
    std::cout << "Enter the number of sides for Peter's die: ";
    int p;
    std::cin >> p;

    std::cout << "Enter the number of sides for Colin's die: ";
    int c;
    std::cin >> c;

    double result = probability(p, c);
    std::cout << "The probability is: " << result << "\n";

    return 0;
}