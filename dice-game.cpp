#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double probability = 0.0;

    for(int i = m + 1; i <= n; i++) {
        probability += (double)(n - i + 1) / total;
    }

    return probability;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}