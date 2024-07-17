#include <vector>
using namespace std;

double getProbability(int n, int m) {
    double total = (long long)n*m;
    return 1.0 - (n + 1)*(m)/(total);
}