#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    return (n - 1.0) / (double)(n * m);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m) << endl;
    return 0;
}