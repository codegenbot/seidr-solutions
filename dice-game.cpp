#include <iostream>
#include <iomanip>

using namespace std;

double probability(int n, int m) {
    double total = 0.0;
    for (int i = 1; i <= min(n-1,m); i++) {
        total += (1.0 / n) * (1.0 / m);
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << probability(n, m) << endl;
    return 0;
}