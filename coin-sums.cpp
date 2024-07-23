#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int quarters = cents / 25; 
    int remaining_cents = cents % 25;
    
    int dimes = remaining_cents / 10;
    remaining_cents %= 10;
    
    int nickles = remaining_cents / 5;
    remaining_cents %= 5;
    
    int pennies = remaining_cents;
    
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickles: " << nickles << endl;
    cout << "Pennies: " << pennies << endl;
    
    return 0;
}