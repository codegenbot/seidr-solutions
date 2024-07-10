#include <iostream>

double getProbability(int n, int m) {
    double total = (double)n * m;
    int pSuccess = 0;

    for (int i = 1; i <= m; i++) {
        pSuccess += i;
    }

    return (pSuccess / total);
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << getProbability(n, m) << '\n';
    return 0;
}