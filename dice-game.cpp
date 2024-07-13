#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;

    double total_prob = 0.0; 
    for(int i = 1; i < n; i++) {
        double prob = (n - i) * (m - i + 1); 
        prob /= (double)(n*m); 
        total_prob += prob; 

    }
    cout << "The probability that Peter rolls strictly higher than Colin is: " << fixed << setprecision(10) << total_prob << endl;

    return 0;
}