#include <iostream>
using namespace std;

double probability(int n, int m) {
    double result = 0;
    for (int i = m + 1; i <= n; i++) {
        result += 1.0 / n;
    }
    return result;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << probability(n, m);
    return 0;
}