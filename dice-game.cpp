#include <vector>
#include <iostream>

using namespace std;

double getProbability(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= n && i < m; i++) {
        total += 1.0 / m;
    }
    return total / ((n * m));
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << getProbability(n, m);
    return 0;
}