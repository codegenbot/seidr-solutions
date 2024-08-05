#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cout << "Quarters: " << quarters << endl;
    cents %= 25;

    int dimes = cents / 10;
    cout << "Dimes: " << dimes << endl;
    cents %= 10;

    int nickles = cents / 5;
    cout << "Nickles: " << nickles << endl;
    cents %= 5;

    int pennies = cents;
    cout << "Pennies: " << pennies << endl;

    return 0;
}