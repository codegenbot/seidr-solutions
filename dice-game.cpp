```
#include <iostream>
#include <iomanip>

double probability(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= m; i++) {
        sum += (n - i) / static_cast<double>(n * m);
    }
    return sum;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(2) << probability(n, m) << std::endl;
}