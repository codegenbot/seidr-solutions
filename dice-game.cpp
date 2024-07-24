#include <iostream>

double diceGame(int n, int m) {
    if (n > m)
        return 1.0 - (m / (double)(n + m));
    else if (n < m)
        return (m / (double)(n + m));
    else
        return 0.5;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    double result = diceGame(n, m);
    std::cout << result << std::endl;
    return 0;
}