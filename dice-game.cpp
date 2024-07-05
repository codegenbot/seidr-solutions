#include <cmath>
double probability(int n, int m) {
    if (n < m) {
        return 0.0;
    }
    double total = pow((double)(n + m - 1), 2);
    double peter = pow((double)(n), 2);
    double colin = pow((double)(m), 2);
    return (peter - colin) / total;
}