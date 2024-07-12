#include <cmath>

double diceGame(int n, int m) {
    double probability = 0.0;
    for (int i = 1; i < m - 1; i++) {
        probability += (n - i) * pow((1.0 / n), n) * pow((1.0 / m), m);
    }
    return probability;
}