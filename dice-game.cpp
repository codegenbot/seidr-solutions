```cpp
#include <iomanip>

double calculateProbability(int n, int m) {
    if (n == m)
        return 0;
    
    double totalPossibilities = static_cast<double>(n * m);
    double peterWins = static_cast<double>(m - 1) + static_cast<double>(n - m);

    return peterWins / totalPossibilities;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << std::fixed << std::setprecision(1) << calculateProbability(n, m) << std::endl;
    return 0;
}