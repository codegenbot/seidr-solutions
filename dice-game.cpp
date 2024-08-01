#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    return (n - 1.0) / ((double)(n + m - 2));
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << (m < n ? 0 : (double)n/(n+m-1)) << endl;
    return 0;
}