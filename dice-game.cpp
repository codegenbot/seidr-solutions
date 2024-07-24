#include <vector>
#include <iostream>

double diceGame(int n, int m) {
    double total = (n + m);
    return (double)(m) / total;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(1) << diceGame(n, m) << std::endl;
    return 0;
}