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
    pennies = remaining_nickels_pennies % 5;

    if(pennies >= 5) {
        quarters++;
        remaining_cents -= 25;
    }

    cout << quarters << endl; 
    cout << dimes << endl; 
    cout << nickels << endl; 
    cout << pennies << endl; 

    return 0;
}