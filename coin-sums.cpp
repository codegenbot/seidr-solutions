#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int quarters = cents / 25; 
    int remaining_cents = cents % 25;
    
    int dimes = remaining_cents / 10; 
    int remaining_dimes = remaining_cents % 10;
    
    int nickels = remaining_dimes / 5; 
    int remaining_nickels = remaining_dimes % 5;
    
    int pennies = remaining_nickels;

    cout << "Coins: " << quarters << " quarter" << (quarters > 1 ? "s" : "") << endl;
    if(quarters > 0) cout << (quarters == 1 ? "" : "s ") << (cents - quarters * 25) << " remaining\n";
    
    cout << "Dimes: " << dimes << " dime" << (dimes > 1 ? "s" : "") << endl;
    if(dimes > 0) cout << (dimes == 1 ? "" : "s ") << (remaining_cents - dimes * 10) << " remaining\n";
    
    cout << "Nickels: " << nickels << " nickel" << (nickels > 1 ? "s" : "") << endl;
    if(nickels > 0) cout << (nickels == 1 ? "" : "s ") << (remaining_dimes - nickels * 5) << " remaining\n";
    
    cout << "Pennies: " << pennies << " penny" << (pennies > 1 ? "s" : "") << endl;
    
    return 0;
}