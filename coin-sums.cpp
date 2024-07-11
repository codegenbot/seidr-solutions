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

    cout << quarters << endl;
    int remainder = cents - (quarters * 25);
    cout << dimes + (remainder >= 10) << endl;
    remainder %= 10;
    cout << nickels + (remainder >= 5) << endl;
    remainder %= 5;
    cout << pennies + remainder << endl;

    return 0;
}