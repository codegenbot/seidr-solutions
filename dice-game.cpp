#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = 1.0 * (n + m - 1);
    return (1.0 * n / total) * (1.0 * (m-1) / total);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << probability(n, m) << endl;
    return 0;
}