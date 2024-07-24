#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int quarters = cents / 25;
    cents %= 25;
    
    if (cents > 0) {
        // Now calculate pennies based on remaining cents.
        int pennies = cents;
    } else {
        // No need to calculate pennies if there's no remainder.
        pennies = 0;
    }
    
    int dimes = cents / 10;
    cents %= 10;
    
    int nickles = cents / 5;
    cents %= 5;
    
    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;
    
    return 0;
}