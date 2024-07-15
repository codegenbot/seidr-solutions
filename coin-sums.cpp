#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents / 1;
    int nickels = (cents % 100) / 5;
    int dimes = ((cents % 100) % 50) / 10;
    int quarters = cents / 25;

    int remainder = cents - (quarters * 25) - (dimes * 10) - (nickels * 5) - pennies;

    cout << quarters << endl;
    cout << nickels << endl;
    cout << dimes << endl;
    cout << pennies << endl;

    return 0;
}