#include <iostream>

double getProbability(int n, int m) {
    double totalPossibilities = (n + m - 1);
    return ((double)n / totalPossibilities) * ((m - 1) / (totalPossibilities - 1));
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << getProbability(n, m) << std::endl;
    return 0;
}