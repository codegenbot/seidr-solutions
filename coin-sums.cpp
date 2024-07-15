#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    int remaining_cents = cents % 25;
    
    int dimes = remaining_cents / 10;
    remaining_cents %= 10;
    
    int nickels = remaining_cents / 5;
    remaining_cents %= 5;
    
    int pennies = remaining_cents;

    cout << quarters << endl;
    cout << nickels << endl;
    cout << dimes << endl;
    cout << pennies << endl;

    return 0;
}