#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    return (n - 1.0) / (n * m - m);
}

int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    cout << fixed << setprecision(2) << getProbability(n, m) << endl;
    return 0;
}