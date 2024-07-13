#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    return (double)(n - 1) / (n * m);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m) << endl;
    return 0;
}