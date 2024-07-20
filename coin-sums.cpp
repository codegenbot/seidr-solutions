```cpp
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int dimes = 0;
    int nickels = 0;
    int pennies = 0;

    int quarters = cents / 25;
    cents %= 25;

    while (cents >= 10) {
        dimes++;
        cents -= 10;
    }

    while (cents >= 5) {
        nickels++;
        cents -= 5;
    }

    pennies = cents; // store the remaining cents as pennies

    cout << quarters << " quarters" << endl;
    cout << dimes << " dimes" << endl;
    cout << nickels << " nickels" << endl;
    cout << pennies << " pennies" << endl;

    return 0;
}