#include <vector>
#include <iostream>

double probability(int n, int m) {
    if (n <= m)
        return 1.0 - (m + 1.0) / n;
    else
        return (n - m) * 1.0 / n;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(10) << probability(n, m);
    return 0;
}