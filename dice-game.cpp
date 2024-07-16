#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)(n + m);
    return (double)m / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << diceGame(n, m) << endl;
    return 0;
}