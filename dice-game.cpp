#include <vector>
#include <iostream>

double getProbability(int n, int m) {
    double total = (double)n * m;
    return (n - m) / total;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << getProbability(n, m) << "\n";
    return 0;
}