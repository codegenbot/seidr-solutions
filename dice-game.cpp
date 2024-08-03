#include <iostream>

double probability(int n, int m) {
    return (n - 1.0) / (n * m - m);
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << fixed << setprecision(2) << probability(n, m) << '\n';
    return 0;
}