#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int quarters = cents / 25;
    int remaining = cents % 25;
    int dimes = remaining / 10;
    int remaining2 = remaining % 10;
    int pennies = remaining2;
    int nickles = 0; // No need for nickels as we have enough pennies
    
    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;
    
    return 0;
}