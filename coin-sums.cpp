#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int quarters = cents / 25;
    cents %= 25;
    
    int dimes = cents / 10;
    cents %= 10;
    
    int nickles = cents / 5;
    cents %= 5;
    
    int pennies = cents;
    
    cout << quarters << endl; // Quarters
    cout << dimes << endl;     // Dimes
    cout << nickles << endl;   // Nickles
    cout << pennies << endl;   // Pennies
    
    return 0;
}