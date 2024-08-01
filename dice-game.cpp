#include <iostream>

double diceGame(int n, int m) {
    double total = (n + m);
    double p = 1.0;
    
    for (int i = 1; i <= min(n - 1, m); i++) {
        p += (n - i) * (m - i) / (total * total);
    }
    
    return p;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << fixed << setprecision(5) << diceGame(n, m) << '\n';
    return 0;
}