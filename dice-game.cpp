#include <vector>
#include <iostream>

double probability(int n, int m) {
    double total = (double)n * m;
    return 1.0 - (n + m) / total;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << fixed << setprecision(10) << probability(n, m) << std::endl;
    return 0;
}