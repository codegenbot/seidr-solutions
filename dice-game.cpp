#include <iostream>
#include <cmath>
using namespace std;

double getProbability(int n, int m) {
    double prob = 0.0;
    for (int i = 1; i <= n; i++) {
        int count = 0;
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                count++;
            }
        }
        prob += (double)count / (double)m;
    }
    return prob / (double)n;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << getProbability(n, m) << endl;
    return 0;
}
```