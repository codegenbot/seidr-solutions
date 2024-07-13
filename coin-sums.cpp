#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = 0;
    while (cents >= 25) {
        cents -= 25;
        ++quarters;
    }

    int dimes = 0;
    if (cents >= 10) {
        dimes = cents / 10;
        cents %= 10;
    } else {
        cout << "0" << endl; 
    }

    int nickels = 0;
    if (cents >= 5) {
        nickels = cents / 5;
        cents %= 5;
    } else {
        cout << "0" << endl; 
    }

    int pennies = cents;

    cout << quarters << endl; 
    cout << dimes << endl; 
    cout << nickels << endl; 
    cout << pennies << endl; 

    return 0;
}