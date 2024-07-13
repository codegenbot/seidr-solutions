#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;

    cout << "The probability that Peter rolls strictly higher than Colin is: ";
    for(int i = 1; i < n; i++) {
        double prob = (n - i) / (double)(n*m); 
        cout << fixed << setprecision(10) << prob << " "; 
    }
    cout << endl;

    return 0;
}