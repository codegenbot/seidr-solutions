#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents / 1;
    int nickels = (cents % 100) / 25;
    int dimes = ((cents % 100) % 25) / 10;
    int quarters = (((cents % 100) % 25) % 10) / 5;

    cout << "Pennies: " << pennies << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Quarters: " << quarters << endl;

    return 0;
}