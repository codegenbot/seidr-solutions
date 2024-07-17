#include <vector>
#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double sum = 0.0;
    for (int i = n + 1; i <= m * 2; i++) {
        sum += (i - n) / static_cast<double>(m * n);
    }
    return sum;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m) << endl;
    return 0;
}