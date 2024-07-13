#include <vector>
using namespace std;

double diceGame(int n, int m) {
    double total = (n + m);
    return (1.0 * n / total) * (m - 1.0) / (total - 1.0);
}