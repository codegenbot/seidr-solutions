#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = n * m;
    double petersWin = 0.0;
    
    for (int i = 1; i <= m && i < n; i++) {
        petersWin += ((n - i)) / (total);
    }
    
    return petersWin;
}

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;
    double result = diceGame(n, m);
    cout << "The probability that Peter rolls strictly higher than Colin is: " << result << endl;
    return 0;
}