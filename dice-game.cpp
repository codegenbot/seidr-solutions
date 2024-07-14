#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (n + m);
    double p = 0;
    
    for(int i = m+1; i <= n; i++){
        p += ((double)i / total);
    }
    
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(17) << diceGame(n, m) << endl;
    return 0;
}