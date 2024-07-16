```
#include <iostream>
#include <iomanip>

double probability(int n, int m);

int main() {
    int n, m;
    std::cin >> n >> m;
    double result = probability(n, m);
    std::cout << std::fixed << std::setprecision(6) << result << std::endl;
    return 0;
}

double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < m && j < i; j++) {
            p += 1.0 / total;
        }
    }

    return p;
}