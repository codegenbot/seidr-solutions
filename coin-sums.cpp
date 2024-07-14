#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 0; // Ensure that quarters are used as much as possible before moving on to dimes and nickels.

    int dimes = cents / 10;
    cents %= 10;

    int nickels = cents / 5;
    cents %= 5;

    int pennies = cents;

    cout << quarters << endl; 
    cout << dimes << endl; 
    cout << nickels << endl; 
    cout << pennies << endl; 

    return 0;
}