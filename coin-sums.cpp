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
    
    int nickles = remainingCents / 5;
    remainingCents %= 5;
    
    int pennies = remainingCents;
    
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickles: " << nickles << endl;
    cout << "Pennies: " << pennies << endl;

    return 0;
}