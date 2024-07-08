```cpp
#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = 0.0;
    for (int i = 1; i < m; i++) {
        total += 1.0 / n;
    }
    return 1.0 - total;
}

int main() {
    int n, m;
    cout << "Enter number of sides on Peter's die: ";
    cin >> n;
    cout << "Enter number of sides on Colin's die: ";
    cin >> m;
    double result = diceGame(n, m);
    cout << "Probability that Peter rolls strictly higher than Colin is: " << result << endl;
    return 0;
}