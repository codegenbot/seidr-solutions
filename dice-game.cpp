```cpp
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    double result = probability(n, m);
    cout << fixed << setprecision(6) << result << endl;
    return 0;
}

double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < m && j < i; j++) {
            p += 1.0 / total;
        }
    }

    return p;
}