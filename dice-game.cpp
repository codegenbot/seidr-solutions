#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    double total = (double)n * m;
    return (n - 1) / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(10) << getProbability(n, m);
    return 0;
}