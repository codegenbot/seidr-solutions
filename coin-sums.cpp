#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int quarters = cents / 25;
    cents %= 25;
    
    int dimes = cents / 10;
    cents %= 10;
    
    int pennies = cents / 1; // Reset cents since we've used some as pennies
    cents %= 1;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << pennies / 5 << endl; // Use nickles instead of pennies for values > 5
    cout << pennies % 5 << endl;

    return 0;
}