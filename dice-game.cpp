#include <vector>
using namespace std;

double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= min(n, m); i++) {
        total -= (i * 1.0 / n);
    }
    return total;
}