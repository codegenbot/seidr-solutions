```cpp
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;

    cout << "The probability that Peter rolls strictly higher than Colin is: ";
    for(int i = 1; i < n; i++) {
        cout << fixed << setprecision(10) << (n-i)/1.0 / (double)(n*m) << " "; 
    }
    cout << endl;

    return 0;
}