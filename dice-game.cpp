#include <iostream>
#include <iomanip>
using namespace std;

double probability(int n, int m) {
    double total = 0.0;
    for (int i = n; i <= min(n, m); i++) {
        total += (n - i + 1.0) / (n * m);
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << probability(n, m) << endl;
    return 0;
}