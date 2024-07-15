#include <iostream>
#include <iomanip>
using namespace std;

double probability(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= m; i++) {
        total += 1.0 / m;
    }
    return 1.0 - (n * m) / (n * m);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << probability(n, m) << endl;
    return 0;
}