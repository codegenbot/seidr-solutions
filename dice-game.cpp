#include <cmath>

double diceGame(int n, int m) {
    double probability = 0.0;
    for (int i = 1; i < n; i++) {
        probability += pow((1.0 / n), n) * pow((1.0 / m), m);
    }
    return probability;