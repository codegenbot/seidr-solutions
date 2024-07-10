#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= min(n, m); i++) {
        sum += (n - i + 1) / (double)n * (m - i) / (double)m;
    }
    return sum;
}

int main() {
    int n; // input
    int m; // input
    cin >> n >> m;
    cout << diceGame(n, m) << endl;
    return 0;
}