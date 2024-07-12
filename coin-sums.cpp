#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int coins25 = cents / 25; 
    cents %= 25;
    
    int coins10 = cents / 10; 
    cents %= 10;
    
    int coins5 = cents / 5; 
    cents %= 5;
    
    int coins1 = cents; 

    cout << "Coins: " << coins25 << " quarters" << endl;
    if(coins25 > 0) cout << coins25 << " remaining\n";
    
    cout << "Dimes: " << coins10 << endl;
    if(coins10 > 0) cout << coins10 << " remaining\n";
    
    cout << "Nickels: " << coins5 << endl;
    if(coins5 > 0) cout << coins5 << " remaining\n";
    
    cout << "Pennies: " << coins1 << endl;
    
    return 0;
}