
```
#include <iostream>
#include <cmath>
using namespace std;
float probability(int n, int m) {
    float p = 0.0f;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                p += 1.0f / (n * m);
            }
        }
    }
    return std::round(p, 6);
}
int main() {
    int n, m;
    cin >> n >> m;
    cout << probability(n, m) << endl;
    return 0;
}
```