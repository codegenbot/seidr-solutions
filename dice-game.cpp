#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    double higher = 0.0;
    for (int i = 1; i <= m; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            higher += 1.0;
        }
    }
    return higher / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << probability(n, m);
    return 0;
}