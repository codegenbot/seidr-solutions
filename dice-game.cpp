#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    return 1.0 - ((double)n / total) * m;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}