#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (n * m);
    double petersWin = ((m - 1) + (n - m)) / (total - m);
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