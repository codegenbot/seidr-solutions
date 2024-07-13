```cpp
#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    for (int i = 1; i < m; i++) {
        p += (n - i + 1.0) / total;
    }

    return p;
}

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;

    double result = probability(n, m);
    cout << "The probability that Peter rolls strictly higher than Colin is: " << result << endl;

    return 0;
}