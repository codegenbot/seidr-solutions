#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    if (quarters > 0) cout << "Quarters: " << quarters << endl;
    cents %= 25;

    int dimes = cents / 10;
    if (dimes > 0) cout << "Dimes: " << dimes << endl;
    cents %= 10;

    int nickles = cents / 5;
    if (nickles > 0) cout << "Nickels: " << nickles << endl;
    cents %= 5;

    int pennies = cents;
    if (pennies > 0) cout << "Pennies: " << pennies << endl;

    return 0;
}