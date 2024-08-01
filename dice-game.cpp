#include <iostream>
#include <iomanip>

double calculateProbability(int n, int m) {
    double probability = 0;
    for (int i = m + 1; i <= n; i++) {
        probability += 1.0 / n * 1.0 / m;
    }
    return probability;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(1) << fixed << calculateProbability(n, m) << endl;
    return 0;
}