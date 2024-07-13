#include <iostream>
using namespace std;

int main() {
    int cents;
    cout << "Enter the number of cents: ";
    cin >> cents;

    int quarters = cents / 25;
    int dimes = (cents % 25) / 10;
    int nickles = ((cents % 25) % 10) / 5;
    int pennies = cents % 5;

    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickles: " << nickles << endl;
    cout << "Pennies: " << pennies << endl;

    return 0;
}