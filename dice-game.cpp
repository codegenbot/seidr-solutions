#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    double p = 0.0;
    for (int i = m + 1; i <= n; i++) {
        p += 1.0 / n;
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << getProbability(n, m);
    return 0;
}