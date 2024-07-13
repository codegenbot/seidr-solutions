#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int coins25 = cents / 25; // quarters
    cents %= 25;
    
    int coins10 = cents / 10; // dimes
    cents %= 10;
    
    int coins5 = cents / 5; // nickels
    cents %= 5;
    
    int coins1 = cents; // pennies
    
    cout << "Quarters: " << coins25 << endl;
    if (coins10 > 0)
        cout << "Dimes: " << coins10 << endl;
    else 
        cout << "Dimes: 0" << endl;
    
    if (coins5 > 0)
        cout << "Nickles: " << coins5 << endl;
    else
        cout << "Nickles: 0" << endl;
        
    if (coins1 > 0)
        cout << "Pennies: " << coins1 << endl;
    else
        cout << "Pennies: 0" << endl;
    
    return 0;
}