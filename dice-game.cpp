#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    double p1 = 0.0;
    for(int i = 1; i <= n; i++) {
        p1 += (double)i / n;
    }
    return p1 - m / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << probability(n, m);
    return 0;
}