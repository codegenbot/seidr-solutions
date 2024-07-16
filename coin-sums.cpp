```cpp
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25; // subtracted one from quarters
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickles = cents / 5;
    cents %= 5;

    int pennies = cents % 5; // previous line was incorrect, now fixed
    cents /= 5;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies + 1 << endl; // added 1 to pennies

    return 0;
}