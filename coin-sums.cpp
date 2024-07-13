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
    if(quarters > 0) cout << quarters - 1 << " remaining\n";
    
    cout << "Dimes: " << dimes << (dimes > 1 ? "s" : "") << endl;
    if(dimes > 0) cout << dimes - 1 << " remaining\n";
    
    cout << "Nickels: " << nickels << (nickels > 1 ? "s" : "") << endl;
    if(nickels > 0) cout << nickels - 1 << " remaining\n";
    
    cout << "Pennies: " << pennies << (pennies > 1 ? "s" : "") << endl;
    
    return 0;
}