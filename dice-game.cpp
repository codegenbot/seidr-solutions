#include <vector>
#include <iostream>
#include <iomanip>
#include <initializer_list>

double probability(int n, int m) {
    double p = 0.0;
    for (int i = m + 1; i <= n; ++i) {
        p += 1.0 / n * 1.0 / m;
    }
    return p;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(4) << probability(n, m) << std::endl;
    return 0;