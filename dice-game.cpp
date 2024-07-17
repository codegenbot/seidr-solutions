#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    return 1.0 - ((n - 1.0) / n) * (m / total);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << probability(n, m) << endl;
    return 0;
}