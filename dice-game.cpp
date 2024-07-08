#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double total = (n + m);
    return (total - m) * 1.0 / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << diceGame(n, m) << endl;
    return 0;
}