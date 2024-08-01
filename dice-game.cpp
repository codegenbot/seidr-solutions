#include <vector>
using namespace std;

double game(int n, int m) {
    double total = (double)n * m;
    return (n - 1.0) / total;
}