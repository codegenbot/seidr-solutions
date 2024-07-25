#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double sum1 = 0;
    double sum2 = 0;
    
    for (int i = 1; i <= n; i++) {
        sum1 += 1.0 / n;
        if (i > m) {
            sum2 += 1.0 / m;
        }
    }
    
    return sum2;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << diceGame(n, m) << endl;
    return 0;
}