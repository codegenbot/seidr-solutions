#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    double totalPossibilities = 1.0 * (n + m - 1);
    return (1.0 * n / totalPossibilities) * (m - 1) / (n + m - 2);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << getProbability(n, m) << endl;
    return 0;
}