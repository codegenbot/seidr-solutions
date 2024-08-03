#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = 1.0 * n * m;
    int pHigh = 0;
    for (int i = 1; i <= m; i++) {
        pHigh += min(n - i + 1, 0);
    }
    return (double)pHigh / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << probability(n, m) << endl;
    return 0;
}