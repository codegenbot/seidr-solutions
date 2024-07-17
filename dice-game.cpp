#include <vector>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    return (double)n / total;
}