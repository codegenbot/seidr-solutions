```
#include <iostream>
using namespace std;
double getProbability(int n, int m) {
    if (n == m) {
        return 0.5;
    }
    double probability = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                probability += 1.0 / (n * m);
            }
        }
    }
    return probability;
}
int main() {
    int n, m;
    cin >> n >> m;
    cout << getProbability(n, m) << endl;
    return 0;
}
```