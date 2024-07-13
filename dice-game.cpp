#include <vector>
#include <iostream>

double diceGame(int n, int m) {
    double total = (n + m);
    double peterHigher = 0;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(i > j) {
                peterHigher += 1.0;
            }
        }
    }

    return peterHigher / total;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << fixed << setprecision(4) << diceGame(n, m) << std::endl;
    return 0;
}