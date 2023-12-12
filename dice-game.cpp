```
#include <iostream>

double probabilityOfHigher(int n, int m) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                count++;
            }
        }
    }
    return static_cast<double>(count) / (n * m);
}

int main() {
    int n, m;
    std::cin >> n >> m;
    printf("%.8f\n", probabilityOfHigher(n, m));
    return 0;
}
```