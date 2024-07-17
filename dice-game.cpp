#include <iostream>
#include <iomanip>

using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0;
    
    for(int i = 1; i <= min(n,m); i++){
        p += (n - i) * (m - i + 1);
    }
    
    return p / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(10) << diceGame(n, m) << endl;
    return 0;