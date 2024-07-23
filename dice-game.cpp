```cpp
#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;

    for(int i = 1; i <= min(n, m); i++) {
        if(m - i > n) {
            p -= (i) / total;
        } else {
            p += (n - i) / total;
        }
    }

    p += ((double)(n - m)) / total;

    return p;
}

int main() { cout << fixed << setprecision(2) << diceGame(43, 98) << endl; return 0; }