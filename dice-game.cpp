#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    return (n - 1.0) / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6);
    cout << diceGame(n, m) << endl;
    return 0;
}