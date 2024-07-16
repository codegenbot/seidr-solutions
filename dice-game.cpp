#include <iostream>
using namespace std;

double probability(int n, int m) {
    if (n <= m) return 0; 
    double result = 0.0;
    for (int i = m+1; i <= n; ++i) { 
        result += ((double)i)/n; 
    }
    return result;
}

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;
    cout << "The probability that Peter rolls strictly higher than Colin is: " << probability(n, m) << endl;
    return 0;
}