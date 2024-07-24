#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)(n+m);
    return (n - 1)/(total);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m);
    return 0;
}