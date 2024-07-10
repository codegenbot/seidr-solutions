#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double sum = 0;
    for (int i = min(n, m) + 1; i <= n; i++) {
        sum += (m - i) / (double)m * ((n - min(n, m)) / (double)n);
    }
    return sum;
}

int main() {
    int n; 
    int m; 
    cin >> n >> m;
    cout << diceGame(n, m) << endl;
    return 0;
}