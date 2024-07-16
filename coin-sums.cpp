#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickles = cents / 5;
    cents %= 5;

    int pennies = cents;
    if(pennies > 0) {
        cout << pennies << endl; // print pennies only if it's greater than 0
    } else {
        pennies = 0; // set pennies to 0 if not needed, adjust quarter or dime count instead
    }

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}