#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double higher = 0.0;
    
    for(int i=1; i<=n-1; i++) {
        higher += (double)(n-i+1) / total;
    }
    
    return higher;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << diceGame(n, m) << endl;
    return 0;
}