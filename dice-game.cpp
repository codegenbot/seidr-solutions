Here is the corrected code:

```cpp
#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (n * m);
    double petersWin = (m - 1) * (n - m + 1);
    return petersWin / total;
}

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;
    cout << "The probability that Peter rolls strictly higher than Colin is: " << diceGame(n, m) << endl;
    return 0;
}