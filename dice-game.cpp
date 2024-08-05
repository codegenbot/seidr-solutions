#include <vector>
#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double probability = 0.0;
    for (int i = 1; i < m; i++) {
        probability += 1.0 / n;
    }
    return probability;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(10) << diceGame(n, m);
    return 0;
}