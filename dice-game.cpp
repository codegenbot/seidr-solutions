#include <vector>
#include <iostream>

double probability(int n, int m) {
    double p = 0.0;
    for (int i = m + 1; i <= n; ++i) {
        p += 1.0 / (n * m);
    }
    return p;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    double result = probability(n, m);
    std::cout << result << std::endl;
    return 0;
}