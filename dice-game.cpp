#include <iostream>

double diceGame(int n, int m) {
    double total = (n + m);
    double p = 0;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(i > j) {
                p += 1.0 / (total * total);
            }
        }
    }

    return p;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(6) << diceGame(n, m) << std::endl;

    return 0;
}