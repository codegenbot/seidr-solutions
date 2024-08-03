#include <iostream>
using namespace std;

void coinSums(int cents) {
    int pennies = cents;
    int nickels = cents / 5;
    cents %= 5;
    int dimes = cents / 10;
    cents %= 10;
    int quarters = cents / 25;
    cents %= 25;

    cout << pennies << endl;
    cout << nickels << endl;
    cout << dimes << endl;
    cout << quarters << endl;
}

int main() {
    int cents;
    cin >> cents;
    coinSums(cents);
    return 0;
}