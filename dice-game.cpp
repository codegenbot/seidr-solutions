#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double numerator = 1;
    double denominator = n * m;
    
    for (int i = 1; i <= m && i < n; i++) {
        numerator += n - i;
    }
    
    return numerator / denominator;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << diceGame(n, m) << endl;
    return 0;
}