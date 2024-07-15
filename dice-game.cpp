#include <iostream>
#include <iomanip>

double diceGame(int n, int m) {
    if (n > m) {
        double p = (m * (m - 1)) / ((double)n * (n + 1));
        return 1.0 - p;
    } else if (n < m) {
        double p = (n * (n - 1)) / ((double)m * (m + 1));
        return p;
    } else {
        return 0.5; // Both dice have the same number of sides, so probability is 1/2
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    double d = diceGame(n, m);
    std::cout << fixed << setprecision(6) << d << endl;  
    return 0;
}