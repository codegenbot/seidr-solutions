#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;

    double sum = 0.0;
    for(int i = 1; i < n; i++) {
        sum += (double)i / m - (n-i) / (double)(n*m); 
    }
    cout << "The probability that Peter rolls strictly higher than Colin is: ";
    cout << fixed << setprecision(10) << sum << endl;

    return 0;
}