```cpp
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents / 1;
    int remainingCents = cents % 1;
    int quarters = remainingCents / 25;
    remainingCents %= 25;
    int dimes = remainingCents / 10;
    remainingCents %= 10;
    int nickles = remainingCents / 5;

    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;

    return 0;
}