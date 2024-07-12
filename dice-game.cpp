#include <bits/stdc++.h>

double diceGame(int n, int m) {
    double total = (n + m);
    return 1.0 - (m * 1.0 / total);
}

int main() {
    // Test the function
    int n, m;
    std::cin >> n >> m;
    std::cout << diceGame(n, m) << '\n';
    return 0;
}