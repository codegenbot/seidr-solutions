```
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string getProbability(int n, int m) {
    double prob = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                prob += 1.0 / (n * m);
            }
        }
    }
    return to_string(prob, 10);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << getProbability(n, m) << endl;
    return 0;
}
```