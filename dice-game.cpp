#include <iostream>

double game(int n, int m) {
    double sum = 0;
    for (int i = n + 1; i <= m * 2; i++) {
        sum += 1.0 / (n * 1.0) * 1.0 / (m * 1.0);
    }
    return sum;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(1) << game(n, m) << '\n';
    return 0;
}