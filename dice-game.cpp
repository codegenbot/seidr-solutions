#include <iostream>

double diceGame(int n, int m) {
    double numerator = 1;
    double denominator = 1;

    if(n > m) {
        for(int i = 1; i <= m; i++) {
            numerator *= (n - i);
            denominator *= (m + n - i);
        }
    } else {
        for(int i = 1; i <= n; i++) {
            numerator *= (m - i);
            denominator *= (m + n - i);
        }
    }

    return numerator / denominator;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    double result = diceGame(n, m);
    std::cout << result << std::endl;
    return 0;
}