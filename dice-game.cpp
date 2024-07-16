```c++
#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;

    for(int i = 1; i <= min(m,n); i++) {
        if(i < m) p += ((double)(n-i)/(n*m));
    }
    
    return 1 - p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << diceGame(n, m) << endl;
    return 0;
}