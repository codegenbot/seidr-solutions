#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    return (double)n / (n + m);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << diceGame(n, m) << endl;
    return 0;
}