#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    double sum = 0.0;
    for (int i = n + 1; i <= m * n; i++) {
        sum += 1.0 / m;
    }
    return sum / (n * m);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << getProbability(n, m) << endl;
    return 0;
}