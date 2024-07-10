#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double total = (n + m - 1);
    return (double)(m - 1) / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m) << endl;
    return 0;
}