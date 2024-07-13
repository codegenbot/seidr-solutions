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
    
    cout << "Quarters: " << quarters << endl;
    if (dimes > 0)
        cout << "Dimes: " << dimes << endl;
    if (nickles > 0)
        cout << "Nickles: " << nickles << endl;
    if (pennies > 0)
        cout << "Pennies: " << pennies << endl;
    
    return 0;
}