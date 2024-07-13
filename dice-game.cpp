```cpp
#include <iostream>
#include <string>

using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    for (int i = 1; i < n; i++) {
        p += (double)1 / total;
    }
    return p;
}

int main() {
    string strN, strM;

    cout << "Enter value of n: ";
    getline(cin, strN);

    int n = stoi(strN); 

    if(n < 2) {
        cout << "n must be at least 2. Please enter again." << endl;
        cout << "Enter value of n: ";
        getline(cin, strN);
        n = stoi(strN); 
    }

    cout << "\nEnter value of m: ";
    getline(cin, strM);

    int m = stoi(strM); 

    if(m < 2) {
        cout << "m must be at least 2. Please enter again." << endl;
        cout << "Enter value of m: ";
        getline(cin, strM);
        m = stoi(strM); 
    }

    double result = diceGame(n, m);
    cout << "Probability that Peter rolls strictly higher than Colin is: " << result << endl; 
    return 0;
}