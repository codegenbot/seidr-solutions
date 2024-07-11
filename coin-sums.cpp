#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents / 1;
    cents %= 1; 
    cout << pennies << endl;

    if (cents >= 5) {
        int nickels = cents / 5;
        cents %= 5; 
        cout << nickels << endl;
    }

    if (cents >= 10) {
        int dimes = cents / 10;
        cents %= 10; 
        cout << dimes << endl;
    }

    int quarters = cents / 25;
    cout << quarters << endl;

    return 0;
}