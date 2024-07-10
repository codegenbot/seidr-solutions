```cpp
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;
    double p = 0.0;
    double total = (double)n * m;
    for (int i = 1; i <= n - 1; i++) {
        if(i>m)
            p += (1.0 / n) * (1.0 / m);
    }
    cout << "The probability that Peter rolls strictly higher than Colin is: " << 1 - p << endl;
    return 0;
}