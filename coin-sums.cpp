```cpp
#include <iostream>
using namespace std;

void coinSums(int cents) {
    int pennies = cents / 1;
    int nickels = (cents % 100) / 5;
    int remainingCents = cents % 5;
    int dimes = (cents % 25) / 10;
    int quarters = cents / 25;

    cout << quarters << endl;
    cout << nickels + pennies / 5 << endl;
    cout << dimes + nickels * 2 + remainingCents / 1 << endl;
    cout << pennies << endl;
}

int main() {
    int cents;
    cin >> cents;

    coinSums(cents);

    return 0;
}