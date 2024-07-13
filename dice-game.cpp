#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;

    double sum = 0.0;

    // Calculate probability where Colin rolls 1 to m-1
    for(int i = 1; i < m; i++) {
        for(int j = i + 1; j <= n; j++) {
            sum += (1.0 / (double)m) * (1.0 / (double)(n - j + 1));
        }
    }

    // Calculate probability where Colin rolls m
    for(int j = 1; j < n; j++) {
        sum += (1.0 / (double)m) * (1.0 / (double)n);
    }

    // Calculate probability where Colin rolls m and Peter rolls higher
    for(int j = m + 1; j <= n; j++) {
        sum += (1.0 / (double)m) * (1.0 / (double)(n - j + 1));
    }

    // Calculate probability of both rolling maximum values
    sum -= (1.0 / (double)m) * (1.0 / (double)n);

    cout << fixed << setprecision(10) << sum << endl;

    return 0;
}