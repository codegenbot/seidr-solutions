#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25; 
    int remainingCents = cents % 25;

    cout << quarters << endl; 

    int dimes = remainingCents / 10;
    remainingCents %= 10;

    cout << dimes << endl; 

    int nickels = remainingCents / 5;
    remainingCents %= 5;

    int pennies = remainingCents;

    cout << nickels << endl; 
    cout << pennies << endl; 

    return 0;
}