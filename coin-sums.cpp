#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents;
    cents %= 100; 

    int nickels = cents / 5;
    cents %= 5;

    int dimes = (cents % 5 == 0 ? cents / 10 : (cents - (cents % 5)) / 10);
    cents %= 10;

    int quarters = (cents % 100) / 25;

    cout << pennies << endl; 
    cout << nickels << endl; 
    cout << dimes << endl; 
    cout << quarters << endl; 

    return 0;
}