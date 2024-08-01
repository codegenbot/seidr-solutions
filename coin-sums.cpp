#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents / 100; // quarters
    cents %= 100;
    int nickles = cents / 25; // dimes
    cents %= 25;
    int dimes = cents / 10; // nickels
    cents %= 10;
    int coins = cents; // pennies

    cout << pennies << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << coins << endl;

    return 0;
}