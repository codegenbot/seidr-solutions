#include <vector>
#include <iostream>

double diceGame(int n, int m) {
    double total = (n + m - 1);
    return static_cast<double>(n-1)/total;
}