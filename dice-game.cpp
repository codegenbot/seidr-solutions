#include <vector>
using namespace std;

double getProbability(int n, int m) {
    double total = (long long)n * m;
    return (total - (n + 1) * m) / (double)(total);
}