#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int quarters = cents / 25; 
    cents %= 25;
    
    int dimes = quarters + (cents / 10);
    cents %= 10;
    
    int nickels = dimes + (cents / 5);
    cents %= 5;
    
    int pennies = cents;

    cout << "Coins: " << quarters << " quarters" << endl;
    if(quarters > 0) cout << (quarters == 1 ? "" : "s ") << quarters << " remaining;\n";
    
    cout << "Dimes: " << dimes - quarters << endl;
    if(dimes > 0) cout << (dimes == 1 ? "" : "s ") << dimes - quarters << " remaining;\n";
    
    cout << "Nickels: " << nickels - dimes << endl;
    if(nickels > 0) cout << (nickels == 1 ? "" : "s ") << nickels - dimes << " remaining;\n";
    
    cout << "Pennies: " << pennies + nickles << endl;
    
    return 0;
}