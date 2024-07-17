#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double count = 0;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(i > j) {
                count++;
            }
        }
    }
    
    return count / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m);
    return 0;
}