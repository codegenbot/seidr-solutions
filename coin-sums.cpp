#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents / 1;
    int remaining = cents % 1;
    int nickels = remaining / 25;
    remaining %= 25;
    int dimes = remaining / 10;
    remaining %= 10;
    int quarters = remaining / 5;

    cout << "Pennies: " << pennies << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Quarters: " << quarters << endl;

    return 0;
}