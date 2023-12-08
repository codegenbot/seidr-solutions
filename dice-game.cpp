
Here is the modified code:
```
#include <iostream>
using namespace std;

long double probability(int n, int m) {
    long double prob = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                prob += 1.0L / (n * m);
            }
        }
    }
    return prob - 1.0e-9;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << probability(n, m) << endl;
    return 0;
}
```