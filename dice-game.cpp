#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (long long)n * m;
    double p = 0.0;
    
    for (int i = 1; i <= m && i < n; i++) {
        p += n - i;
    }
    
    return p / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m) << endl;
    return 0;
}