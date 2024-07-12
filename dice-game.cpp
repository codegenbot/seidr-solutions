#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    for (int i = m + 1; i <= n; ++i) {
        p += (double)(n - i + 1) / total;
    }

    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << "The probability that Peter rolls strictly higher than Colin is: " << diceGame(n,m) << endl;
    return 0;
}