#include <iostream>
#include <cmath>
using namespace std;

double getProbability(double n, double m) {
    double prob = 0.0;
    for (double i = 1.0; i <= n; i++) {
        for (double j = 1.0; j <= m; j++) {
            if (i > j) {
                prob += 1.0 / (n * m);
            }
        }
    }
    return prob;
}

int main() {
    double n, m;
    cin >> n >> m;
    cout << getProbability(n, m) << endl;
    return 0;
}