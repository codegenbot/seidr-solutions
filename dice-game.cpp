#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    int totalCount = n * m;
    int favorableCount = 0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                favorableCount++;
            }
        }
    }
    
    return (double)favorableCount / totalCount;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}