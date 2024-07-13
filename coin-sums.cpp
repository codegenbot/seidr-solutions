```
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int quarters = cents / 25; 
    cents %= 25;
    
    int dimes = cents / 10; 
    cents %= 10;
    
    int nickels = cents / 5; 
    cents %= 5;
    
    int pennies = cents;

    cout << "Coins: " << quarters << " quarters";
    if(quarters > 1)cout << "s";
    cout << endl;

    cout << "Dimes: " << dimes << endl;
    if(dimes > 1)cout << "s";
    cout << endl;

    cout << "Nickels: " << nickels << endl;
    if(nickels > 1)cout << "s";
    cout << endl;

    cout << "Pennies: " << pennies << endl;

    return 0;
}