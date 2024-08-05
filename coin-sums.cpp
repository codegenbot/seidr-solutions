#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int quarters = cents / 25;
    cents %= 25;
    
    int dimes = cents / 10;
    cents %= 10;
    
    int pennies = cents / 1; // reset the variable name
    cents %= 1; // Reset cents since we've used some as pennies

    cout << quarters << endl;
    cout << dimes << endl;
    cout << pennies / 5 << endl; // convert pennies to nickels
    cout << pennies % 5 << endl; // the remaining pennies after conversion

    return 0;
}