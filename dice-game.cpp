#include <iostream>
#include <iomanip>

double calculateProbability(int n, int m) {
    double probability = 0;
    for (int i = 1; i <= m; i++) {
        probability += (n - m) / (double)(n * m);
    }
    return probability;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(1) << fixed << calculateProbability(n, m) << endl;
    return 0;
}