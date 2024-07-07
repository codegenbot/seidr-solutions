```cpp
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    int remaining_cents = cents % 25;
    int dimes = remaining_cents / 10;
    int remaining_cents_again = remaining_cents % 10;
    int nickles = remaining_cents_again / 5;
    int pennies = remaining_cents_again % 5;

    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;

    return 0;
}