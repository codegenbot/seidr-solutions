#include <vector>
#include <iostream>

double diceGame(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (n - i) / static_cast<double>(n * m);
    }
    return sum;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << fixed << setprecision(10) << diceGame(n, m) << std::endl;
    return 0;
}