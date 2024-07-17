Here is the solution:

#include <iostream>
using namespace std;

double probability(int n, int m) {
    double p = 0;
    for (int i = m + 1; i <= n; i++) {
        p += 1.0 / n * 1.0 / m;
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << probability(n, m) << endl;
    return 0;
}