#include <vector>
using namespace std;

double getProbability(int n, int m) {
    return 1.0 * (n - m) / ((double)n * m);
}