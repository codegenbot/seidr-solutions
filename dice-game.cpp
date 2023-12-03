#include <iostream>

double probabilityOfWinning(int n, int m) {
    if (n == 1 || m == 1) {
        return 0.0;
    }
    if (n > m) {
        return (double)(n - 1) / n;
    } else if (n < m) {
        return (double)n / m;
    } else {
        return 0.5;
    }
}

int main() {
    int n, m;
    std::cin >> n >> m;
    double result = probabilityOfWinning(n, m);
    std::cout << result << std::endl;
    return 0;
}