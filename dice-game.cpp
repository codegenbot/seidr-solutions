#include <iostream>
#include <iomanip>
using namespace std;

double getProbability(int n, int m) {
    return 1.0 * (n - 1) / (n * m);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << getProbability(n, m) << endl;
    return 0;