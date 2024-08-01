#include <iostream>
#include <iomanip>

double calculateProbability(int n, int m) {
    double probability = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                probability += 1.0 / (n * m);
            }
        }
    }
    return probability;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << std::fixed << std::setprecision(1) << calculateProbability(n, m) << std::endl;
    return 0;
}