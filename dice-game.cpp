#include <iostream>
#include <iomanip>

using namespace std;

double diceGame(int n, int m) {
    double total = (n * m);
    double p = 0;
    
    for(int i = 1; i <= n - 1; i++) {
        for(int j = 1; j <= m; j++) {
            if(i > j)
                p++;
        }
    }
    
    return p / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}