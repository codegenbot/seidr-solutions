#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;

    double probability = 0.0; 
    for(int i = 1; i <= m - 1; i++) {
        probability += (double)i / (n * m);
    }
    cout << "The probability that Peter rolls strictly higher than Colin is: " << probability << endl;

    return 0;
}