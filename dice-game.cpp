#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    double total = (double)n * m;
    int sumPeter = 0;
    for (int i = 1; i <= n; i++) {
        sumPeter += i;
    }
    return (sumPeter - (m + 1) / 2.0) / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << getProbability(n, m) << endl;
    return 0;
}