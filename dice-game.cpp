#include <iostream>
using namespace std;

double probability(int n, int m) {
    if(n < 1 || m < 1) return -1; // check for invalid input

    double total = (double)n * m;
    double p = 0.0;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < i && j <= m; j++) {
            p += 1.0 / total;
        }
    }

    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << probability(n, m);
    return 0;
}