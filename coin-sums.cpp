#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents / 1;
    int nickels = cents / 5 - pennies;
    int dimes = cents / 10 - (pennies + nickels * 5);
    int quarters = cents / 25 - (pennies + nickels * 5 + dimes * 10);

    cout << pennies << endl;
    cout << nickels << endl;
    cout << dimes << endl;
    cout << quarters << endl;

    return 0;
}