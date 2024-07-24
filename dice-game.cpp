#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double p = 0;
    if (n > m) {
        p += ((double)n - (double)m) / (n * m);
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << diceGame(n, m) << endl;
    return 0;
}