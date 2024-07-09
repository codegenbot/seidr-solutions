#include <cmath>
double probability(int n, int m) {
    double total = pow(n + m - 1, 1.0);
    return (m - 1.0) / total;
}