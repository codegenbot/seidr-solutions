#include <iostream>
#include <cmath>

double getProbability(int n, int m) {
    double num = (m - 1.0) * ((n - m) / (double) (n * m));
    return num;
}

int main() {
    int n, m;
    std::cout << "Enter the number of sides for Peter's die: ";
    std::cin >> n;
    std::cout << "Enter the number of sides for Colin's die: ";
    std::cin >> m;
    std::cout << "The probability is: " << getProbability(n, m) << std::endl;
    return 0;
}