#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double p = 0.0;
    
    for(int i = 1; i <= m; i++) {
        if(i < n)
            p += 1.0 / (n * m);
    }

    return p;
}

int main() {
    cout << fixed << setprecision(2) << diceGame(6, 6) << endl;
    return 0;
}