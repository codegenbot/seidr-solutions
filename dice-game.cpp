#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (long long)n * m;
    double p = 0;
    
    if(n >= m)
        p += (n - m + 1.0) / total;
        
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(9);
    cout << diceGame(n, m) << endl;
    return 0;
}