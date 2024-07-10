#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (long long)n * m;
    double higher = 0;
    
    for(int i = m+1; i <= n; i++) {
        higher += (long long)(n - i + 1) * (long long)(i - m);
    }
    
    return higher / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m) << endl;
    return 0;
}