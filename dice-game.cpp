#include <iostream>
#include <iomanip>

using namespace std;

double diceGame(int n, int m) {
    double probability = 0;
    for (int i = 1; i <= n - m; i++) {
        probability += (n - i) * 1.0 / (n * m);
    }
    return probability;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}