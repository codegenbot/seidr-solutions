#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double sum = 0;
    if(n <= m) {
        for (int i = min(n, m)+1; i <= n; i++) {
            sum += (m - i) / (double)m * ((n - min(n, m)) / (double)n);
        }
    } else {
        for (int i = min(n, m)+1; i <= m; i++) {
            sum += (n - i) / (double)n * ((m - min(m, n)) / (double)m);
        }
    }
    return sum;
}

int main() {
    int n; // input
    int m; // input
    cin >> n >> m;
    cout << diceGame(n, m) << endl;
    return 0;
}