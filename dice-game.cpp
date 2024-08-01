#include <iostream>
#include <cmath>

int main() {
    int n = 6; // example: an ordinary six-sided die
    int m = 4; // example: a four-sided die
    double result = calculateProbability(n, m);
    std::cout << "Probability: " << result << std::endl;
    return 0;
}

double calculateProbability(int n, int m) {
    return (m * (n - 1.0)) / (n + m - 1.0);
}