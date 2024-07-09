#include <iostream>
#include <iomanip>

double probability(int n, int m) {
    double p = 0;

    for (int i = 1; i <= m; ++i) {
        p += (double)(n - i + 1) / ((double)n * m);
    }

    return p;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    double output = probability(n, m);
    std::cout << std::fixed << std::setprecision(8) << output << std::endl;
    return 0;
}