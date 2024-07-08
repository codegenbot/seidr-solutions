```
#include <iostream>

double diceGame(int n, int m) {
    double result = 0.0;
    for (int i = max(1, n); i <= min(n, m); i++) {
        if (i < n) continue;
        result += (n - i + 1) / (double)(n * m);
    }
    return result;
}

int main() { return diceGame(0, 0); }