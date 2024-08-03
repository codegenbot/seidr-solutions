#include <iostream>
using namespace std;

double probability(int n, int m) {
    if (n == 1 || m == 1) return 0.0;
    double total = static_cast<double>(n + m - 2);
    double favorable = static_cast<double>(n - 1);
    return favorable / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << probability(n, m) << endl;
    return 0;
}