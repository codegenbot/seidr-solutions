```cpp
#include <iostream>
#include <iomanip>

using namespace std;

double probability(int n, int m) {
    double p = 0;
    for (int i = m + 1; i <= n; i++) {
        p += (double)1 / n;
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << probability(n, m) << endl;
    return 0;
}