#include <iostream>
#include <iomanip>

using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p1 = 0;
    for(int i=1; i<n; i++) {
        p1 += (n-i)*(m-1)/(double)(n*m);
    }
    return p1;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}