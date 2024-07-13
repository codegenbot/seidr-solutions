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

    cout << "Coins: " << quarters << " quarter" << (quarters > 1 ? "s" : "") << endl;
    if(quarters > 0) cout << (quarters == 1 ? "" : "s ") << quarters << " remaining\n";
    
    cout << "Dimes: " << dimes << " dime" << (dimes > 1 ? "s" : "") << endl;
    if(dimes > 0) cout << (dimes == 1 ? "" : "s ") << dimes << " remaining\n";
    
    cout << "Nickels: " << nickels << " nickel" << (nickels > 1 ? "s" : "") << endl;
    if(nickels > 0) cout << (nickels == 1 ? "" : "s ") << nickels << " remaining\n";
    
    cout << "Pennies: " << pennies << " penny" << (pennies > 1 ? "s" : "") << endl;
    
    return 0;
}