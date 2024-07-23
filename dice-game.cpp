#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;

    for(int i = 1; i <= min(n, m); i++) {
        if(i < m) {
            p += (n - i) / total;
        }
    }

    p += ((double)(n - m)) / total;

    return p;
}

int main(int argc, char** argv) {
    cout << diceGame(43, 98);
}