#include <iostream>
using namespace std;

void coinSums(int cents) {
    int quarters = cents / 25;
    cents %= 25;
    int dimes = quarters * 4 + (cents / 10);
    cents %= 10;
    int nickles = dimes * (2 + cents/50);
    cents %= 5;
    int pennies = cents;

    cout << quarters << endl;
    cout << dimes - (quarters * 4) << endl;
    cout << nickles - (dimes * 2) - (cents / 10) << endl;
    cout << pennies + (cents / 5) - (dimes * 2) << endl;
}

int main() {
    int cents;
    cin >> cents;
    coinSums(cents);
    return 0;
}