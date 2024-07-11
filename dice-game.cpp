#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    return (double)(n - 1) / (n * m);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << diceGame(n, m) << endl;
    return 0;