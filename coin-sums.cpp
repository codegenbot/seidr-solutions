#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents % 5;
    cents -= pennies;

    int nickels = cents % 10 / 5;
    cents -= nickels * 5;

    int dimes = cents % 25 / 10;
    cents -= dimes * 10;

    int quarters = cents / 25;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickels << endl;
    cout << pennies << endl;

    return 0;
}