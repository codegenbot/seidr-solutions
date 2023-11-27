#include <iostream>

double diceGame(int n, int m) {
    int peterCount = 0;
    int totalCount = n * m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                peterCount++;
            }
        }
    }

    return (double)peterCount / totalCount;
}

int main() {
    int n, m;
    std::cin >> n >> m;

    double probability = diceGame(n, m);

    std::cout << probability << std::endl;

    return 0;
}