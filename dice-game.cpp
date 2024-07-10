#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    double probability = 0;
    for (int i = m + 1; i <= n; i++) {
        probability += 1.0 / n;
    }
    return probability;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << getProbability(n, m) << endl;
    return 0;
}