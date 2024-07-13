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
    double total = 0.0;
    for(int i = 1; i < n; i++) {
        total += (n - i) / (double)(n*m); 
    }
    cout << std::fixed << std::setprecision(10) << total << endl;

    return 0;
}