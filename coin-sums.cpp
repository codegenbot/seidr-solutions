```c++
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents / 1;
    int nickels = cents / 5;
    int dimes = cents / 10;
    int remaining = cents % 10;
    int quarters = remaining / 25;
    remaining %= 25;
    int remainderNickels = remaining / 5;
    remaining %= 5;
    int remainderPennies = remaining;

    cout << quarters << endl;
    cout << remainderNickels << endl;
    cout << dimes - quarters * 2 - remainderNickels << endl;
    cout << pennies + remainderPennies << endl;

    return 0;
}