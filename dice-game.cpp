#include <iostream>
using namespace std;

double probability(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= n && i < m; i++) {
        sum += 1.0 / m;
    }
    for (int i = m + 1; i <= n; i++) {
        sum += 1.0 / n;
    }
    return sum;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << probability(n, m) << endl;
    return 0;
}