#include <iostream>
using namespace std;

double probability(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (n - i + 1.0) / n * (m - i) / m;
    }
    return sum;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << probability(n, m) << endl;
    return 0;
}