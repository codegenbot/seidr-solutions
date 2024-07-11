#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents / 100;
    int remainCents = cents % 100;
    int nickels = remainCents / 25;
    remainCents %= 25;
    int dimes = remainCents / 10;
    remainCents %= 10;
    int quarters = remainCents / 5;

    cout << pennies << endl;
    cout << nickels << endl;
    cout << dimes << endl;
    cout << quarters << endl;

    return 0;
}