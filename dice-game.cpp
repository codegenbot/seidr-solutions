#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double p = 0.0;
    if (n > m) {
        p += 1.0 / n; // probability that Peter rolls higher than Colin's maximum
        for (int i = 1; i < m; i++) {
            p += (m - i) * (1.0 / (n * m)); // probability that Colin rolls i and Peter rolls higher
        }
    } else if (n < m) {
        p += 1.0 / m; // probability that Colin rolls higher than Peter's maximum
        for (int i = 1; i < n; i++) {
            p += (n - i) * (1.0 / (n * m)); // probability that Peter rolls i and Colin rolls higher
        }
    } else {
        p = 0.5;
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}