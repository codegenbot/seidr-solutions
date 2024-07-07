```cpp
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = remainingCents;
    int quarters = cents / 25;
    remainingCents %= 25;
    int dimes = remainingCents / 10;
    remainingCents %= 10;
    int nickles = remainingCents / 5;
    remainingCents %= 5;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}