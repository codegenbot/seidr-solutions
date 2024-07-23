```cpp
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    while (cents >= 25) {
        quarters++;
        cents -= 25;
    }

    int dimes = cents / 10;
    while (cents >= 10) {
        dimes++;
        cents -= 10;
    }

    int nickles = cents / 5;
    while (cents >= 5) {
        nickles++;
        cents -= 5;
    }

    int pennies = (cents % 5);

    cout << quarters << " quarters" << endl;
    cout << nickles << " nickles" << endl;
    cout << dimes << " dimes" << endl;
    cout << pennies << " pennies" << endl;

    return 0;
}