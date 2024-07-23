#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int quarters = cents / 25;
    cents %= 25;
    
    int remainingCents = 25 * quarters; // subtract the coins used
    dimes = remainingCents / 10;
    remainingCents %= 10;
    
    nickles = remainingCents / 5;
    remainingCents %= 5;
    
    pennies = remainingCents;
    
    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;
    
    return 0;
}