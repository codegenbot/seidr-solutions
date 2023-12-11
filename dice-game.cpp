#include <iostream>
#include <cmath>
using namespace std;

double getProbability(int n, int m) {
    double peterRollsHigher = 0.0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                peterRollsHigher += 1.0 / (n * m);
            }
        }
    }
    return peterRollsHigher;
}
int main() {
    int n, m;
    while (cin >> n >> m) {
        cout << getProbability(n, m) << endl;
    }
    return 0;
}