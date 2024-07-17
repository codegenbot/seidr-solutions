#include <vector>
using namespace std;

double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= m; i++) {
        total += pow(n - i + 1, m);
    }
    return 1.0 / pow(m + 1, m);
}