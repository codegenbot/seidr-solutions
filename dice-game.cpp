#include <vector>
using namespace std;

double getProbability(int n, int m) {
    if (n <= m)
        return 1.0 - (double)m / (m + n - 1);
    else
        return (double)m / (n + m - 1);
}