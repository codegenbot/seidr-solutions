#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double probability = 0;
    
    if(n > m) {
        for(int i=m+1; i<=n; i++) {
            probability += (double)(i)/m;
        }
    } else if(m > n) {
        for(int i=n+1; i<=m; i++) {
            probability += (double)(i-1)/n;
        }
    }
    
    return probability;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << diceGame(n, m) << endl;
    return 0;
}