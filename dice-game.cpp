#include <iostream>
using namespace std;

double probability(int n, int m) {
    double p = 0.0;
    for (int i = 1; i <= m; ++i) {
        p += (n - i + 1) / static_cast<double>(n * m);
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << probability(n, m) << endl;
    return 0;
}