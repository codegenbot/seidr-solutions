#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int quarters = cents / 25;
    cents %= 25;
    
    int pennies = cents;
    cout << quarters << endl; // output quarters first
    
    int dimes = (quarters + pennies) / 10;
    pennies = (quarters + pennies) % 10;
    
    int nickles = (dimes + pennies) / 5;
    pennies = (dimes + pennies) % 5;
    
    cout << nickles << endl;
    cout << dimes - nickles * 2 << endl; // subtract the number of nickles from the total number of dimes
    cout << pennies << endl;

    return 0;
}