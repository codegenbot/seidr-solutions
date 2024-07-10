#include <iostream>
#include <iomanip>
using namespace std;

double probability(int n, int m) {
    double total = 0.0;
    for (int i = m + 1; i <= n; i++) {
        total += 1.0 / (double)n * 1.0 / (double)m;
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(5) << fixed << probability(n, m) << endl;
    return 0;