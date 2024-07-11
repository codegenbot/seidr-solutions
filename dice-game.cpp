#include <iostream>
#include <iomanip>

using namespace std;

double getProbability(int n, int m) {
    return 1.0 * (n - m + 1) / n;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << getProbability(n, m) << endl;
    return 0;
}