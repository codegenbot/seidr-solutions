#include <iostream>

double probability(int n, int m) {
    double total_outcomes = n * m;
    double favorable_outcomes = (n - 1) * m;
    return favorable_outcomes / total_outcomes;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << probability(n, m) << std::endl;
    return 0;
}