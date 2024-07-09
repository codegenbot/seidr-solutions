#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = pow(n+m, 2);
    double higher = 0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                higher++;
            }
        }
    }
    
    return higher / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(6) << fixed << diceGame(n, m);
    return 0;
}