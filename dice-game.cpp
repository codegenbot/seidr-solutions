#include <iostream>

using namespace std;

double getProbability(int n, int m) {
    double probability = 0;
    for (int i = 1; i <= m; i++) {
        probability += (n - i + 1) / (double)n * (1.0 / m);
    }
    return probability;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << getProbability(n, m) << endl;
    return 0;
}