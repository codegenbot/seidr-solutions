```cpp
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;

    cout << "You entered: " << n << " and " << m << endl;

    double probability = 0.0;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if(i > j) {
                probability += 1.0 / (double)n / (double)m;
            }
        }
    }

    cout << "The probability that Peter rolls strictly higher than Colin is: " << probability << endl;

    return 0;
}