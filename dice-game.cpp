#include <iostream>
#include <iomanip>

double calculateProbability(int n, int m) {
    double total = (double)n * m;
    double probability = 0;

    for (int i = 1; i <= m; ++i) {
        probability += (n - i) / total;
    }

    return probability;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << std::fixed << std::setprecision(1) << calculateProbability(n, m) << std::endl;
    return 0;
}