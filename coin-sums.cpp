#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int quarters = cents / 25;
    int remainder = cents % 25;
    
    int dimes = remainder / 10;
    remainder %= 10;
    
    int nickles = remainder / 5;
    remainder %= 5;
    
    int pennies = remainder;
    
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickles: " << nickles << endl;
    cout << "Pennies: " << pennies << endl;
    
    return 0;
}