#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    if (n > m) {
        return 1.0 - ((double)m / (m + (m - 1)));
    } else if (n < m) {
        return ((double)n / (n + (n - 1)));
    }
    return 0.5;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(17) << getProbability(n, m);
    return 0;
}