#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = 0;
    
    // Calculate probability where Peter's roll equals Colin's
    double equalRollsProbability = min(m, n - 1) / (n * m);

    // Calculate probability where Peter's roll is strictly higher than Colin's
    double higherThanEqualRollsProbability = (double)(m - min(m, n - 1)) / (n * m);

    total += equalRollsProbability;
    
    return 1.0 - total; 
}

int main() {
    int n, m;
    
    cout << "Enter value of n: ";
    cin >> n;

    if(n < 2) {
        cout << "n must be at least 2. Please enter again." << endl;
        cout << "Enter value of n: ";
        cin >> n;
    }

    cout << "\nEnter value of m: ";
    cin >> m;

    if(m < 2) {
        cout << "m must be at least 2. Please enter again." << endl;
        cout << "Enter value of m: ";
        cin >> m;
    }

    double result = diceGame(n, m);
    cout << "Probability that Peter rolls strictly higher than Colin is: " << result << endl; 
    return 0;
}