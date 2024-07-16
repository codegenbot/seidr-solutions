#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    if (n < 1 || m < 1) {
        return -1; // error: both values must be positive integers
    }
    
    double totalProbability = 0.0;
    
    for (int i = 1; i <= n && i < m; i++) { 
        totalProbability += 1.0 / n; 
    } 
    for (int i = m + 1; i <= n; i++) {
        totalProbability += 1.0 / (n - (m - i)); 
    }
    
    return totalProbability;
}

int main() {
    int n, m;
    cout << "Enter the number of sides on Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides on Colin's die: ";
    cin >> m;
    double probability = diceGame(n, m);
    if (probability < 0) {
        cout << "Invalid input. Both values must be positive integers." << endl;
    } else {
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "The probability that Peter rolls strictly higher than Colin is: " << probability << endl;
    }
    
    return 0;
}