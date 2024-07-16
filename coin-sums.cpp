```cpp
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = 0;
    int nickles = 0;

    while (cents >= 10) {
        dimes = cents / 10;
        cents -= dimes * 10;
    }

    while (cents >= 5) {
        nickles = cents / 5;
        cents -= nickles * 5;
    }

    int pennies = cents;

    cout << quarters << " quarter(s), ";
    cout << dimes << " dime(s), ";
    cout << nickles << " nickel(s), ";
    cout << pennies << " penny(ies)" << endl;

    return 0;
}