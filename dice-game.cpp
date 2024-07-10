#include <vector>
#include <iostream>

double probability(int n, int m) {
    double p = 1.0;
    for (int i = 1; i <= m; i++) {
        p -= (double)i / (n * m);
    }
    return p;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << fixed << setprecision(6) << probability(n, m) << '\n';
    return 0;
}