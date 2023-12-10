```
#include <iostream>
#include <cmath>
using namespace std;
long double probability(int n, int m) {
    long double p = 0.0L;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                p += 1.0L / (n * m);
            }
        }
    }
    return p;
}
int main() {
    int n, m;
    cin >> n >> m;
    cout << probability(n, m) << endl;
    return 0;
}
```