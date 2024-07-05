#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)(n*m);
    double totalProbability = 0.0;
    
    for(int i = max(n-m+1, 1); i <= n; i++) {
        totalProbability += (n-i+1) / total;
    }
    
    return totalProbability;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}