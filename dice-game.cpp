#include <iostream>
using namespace std;

double probability(int n, int m) {
    double p = 1.0;
    for (int i = 1; i <= m && i < n; i++) {
        p -= 1.0 * (n - i) / (n * m);
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << probability(n, m) << endl;
    return 0;
}