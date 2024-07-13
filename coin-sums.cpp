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

    cout << "Coins: " << quarters << (quarters > 1 ? " quarters" : " quarter") << endl;
    if(quarters > 0) cout << " remaining\n";
    
    cout << "Dimes: " << dimes << endl;
    if(dimes > 0) cout << " remaining\n";
    
    cout << "Nickels: " << nickels << endl;
    if(nickels > 0) cout << " remaining\n";
    
    cout << "Pennies: " << pennies << endl;
    
    return 0;
}