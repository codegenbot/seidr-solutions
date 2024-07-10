#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double sum = 0;
    for (int i = 1; i < n; i++) {
        sum += 1.0 / ((n * m) - i);
    }
    return sum;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << diceGame(n, m) << endl;
    return 0;
}