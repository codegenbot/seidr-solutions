#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;

    if(n > m){
        p = (n - m) / total;
    }
    else if(m > n){
        p = (m - n) / total;
    }

    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << diceGame(n, m) << endl;
    return 0;
}