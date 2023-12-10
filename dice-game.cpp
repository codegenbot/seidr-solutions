#include <iostream>
#include <cmath>
using namespace std;

double getProbability(int n, int m) {
    double prob = 0.0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                prob += 1.0 / (n * m);
            }
        }
    }
    return prob;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << getProbability(n, m) << endl;
    return 0;
}
```