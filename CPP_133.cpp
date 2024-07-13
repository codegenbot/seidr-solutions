```
#include <iostream>
#include <limits>
using namespace std;

int originalMain() {
    int n;
    cin >> n; 
    if (!(cin)) {
        cerr << "Invalid input. Please enter an integer." << endl;
    } else {
        checkNumber(n); 
    }
    return 0;
}

void checkNumber(int n) {
    if(n % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
}