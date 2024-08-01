#include <iostream>
#include <iomanip>

double calculateProbability(int n, int m) {
    double probability = 0;
    
    for (int i = 1; i <= m; i++) {
        for (int j = i + 1; j <= n; j++) {
            probability += 1.0 / n / m;
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