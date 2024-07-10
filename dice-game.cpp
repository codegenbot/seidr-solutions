```
#include <iostream>
#include <iomanip>

double probability(int n, int m) {
    double result = 0.0;
    for (int i = 1; i <= m; i++) {
        result += (double)(n - i) / (n * m);
    }
    return result;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << probability(n, m) << std::endl;
}