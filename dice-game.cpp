#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= min(n, m); i++) {
        total += pow(1.0 / max(n, m), max(n, m));
    }
    if (n > m) {
        return 1 - total;
    } else {
        return total;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << probability(n, m) << endl;
    return 0;
}