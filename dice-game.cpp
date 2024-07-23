```c
#include <iostream>
#include <cmath>

int main() {
    int n = 6; // Example input
    int m = 4; // Example input
    double result = diceGame(n, m);
    std::cout << "Probability: " << result << std::endl;
    return 0;
}

double diceGame(int n, int m) {
    double total = (double)n * m;
    double count = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < m && j < i; j++) {
            count++;
        }
    }

    return count / total;
}