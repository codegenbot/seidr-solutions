#include <iostream>
#include <iomanip>
using namespace std;

double probability(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= m && i < n; i++) {
        sum += (m - i + 1.0) / m * (n - i) / (n * 1.0);
    }
    if (i == m)
        return sum;
    else
        return sum + (n - m) / (n * 1.0);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << probability(n, m) << endl;
    return 0;
}