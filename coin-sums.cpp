#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    int remaining_cents = cents % 25; 

    int dimes = remaining_cents / 10;
    int remaining_nickels_pennies = remaining_cents % 10; 

    int nickels = remaining_nickels_pennies / 5;
    int pennies = remaining_nickels_pennies; // since each nickel is 5 cents

    cout << quarters << endl; 
    cout << dimes << endl; 
    cout << nickels << endl; 
    cout << pennies << endl; 

    return 0;
}