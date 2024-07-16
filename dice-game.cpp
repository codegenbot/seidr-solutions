#include <iostream>
#include <iomanip>

double probability(int n, int m) {
    if (n > m) {
        return 1.0 - static_cast<double>(m) / (n + m);
    } else if (n < m) {
        return static_cast<double>(m) / (n + m);
    } else {
        return 0.5;
    }
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(6) << probability(n, m) << std::endl;
    return 0;
}