#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int remainingCents = cents; 
    int dimes = remainingCents / 10; 
    remainingCents %= 10;

    int nickels = remainingCents / 5; 
    remainingCents %= 5;

    int pennies = remainingCents;

    cout << quarters << " quarter(s), " << dimes << " dime(s), " << nickels << " nickel(s), and " << pennies << " penny(ies)." << endl;

    return 0;
}