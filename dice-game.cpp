#include <iostream>
#include <cmath>
using namespace std;
double probability(int n, int m) {
    double p = 0.0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                p += 1.0 / (n * m);
            }
        }
    }
    return round(p, 8); // round to 8 decimal places
}
int main() {
    int n, m;
    cin >> n >> m;
    cout << probability(n, m) << endl;
    return 0;
}