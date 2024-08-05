#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents / 1;
    int nickels = cents / 5 - (pennies / 10);
    int dimes = cents / 10 - (nickels * 2 + pennies / 50);
    int quarters = cents / 25 - (dimes * 4 + nickels / 5 + pennies / 100);

    cout << pennies << endl;
    cout << nickels << endl;
    cout << dimes << endl;
    cout << quarters << endl;

    return 0;
}