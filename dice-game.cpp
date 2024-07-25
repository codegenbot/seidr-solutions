#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    return (1.0 * (n - 1)) / (double)(n * m);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << getProbability(n, m) << endl;
    return 0;
}