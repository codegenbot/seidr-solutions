```
#include <iostream>
#include <cmath>
using namespace std;

double probability(int n, int m) {
    double p = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                p += pow(n, -j) / (m * n);
            }
        }
    }
    return p;
}
```