#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    double total = (long long)n * m;
    double probability = 0.0;

    for (int i = 1; i <= m - 1; i++) {
        probability += (n - i) / (double)total;
    }

    return probability;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << getProbability(n, m) << endl;
    return 0;
}