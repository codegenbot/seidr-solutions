```
#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;

    for(int i = 1; i < n; i++) {
        if(n-i > m) {
            p += 1.0 / total;
        }
    }

    return p;
}

int main() { cout << diceGame(43, 98); return 0; }