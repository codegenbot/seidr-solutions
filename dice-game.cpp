#include <vector>
using namespace std;

double getProbability(int n, int m) {
    double total = (double)n * m;
    return 1.0 - (n / total);
}