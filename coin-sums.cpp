#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents / 1;
    cents %= 1; 
    int nickels = cents / 5;
    cents %= 5; 
    int dimes = cents / 10;
    cents %= 10; 
    int quarters = cents / 25;
    cents %= 25; 

    cout << pennies + (cents > 0) << endl;
    cout << nickels + (cents >= 5) << endl;
    cout << dimes + (cents >= 10) << endl;
    cout << quarters + (cents >= 25) << endl;

    return 0;
}