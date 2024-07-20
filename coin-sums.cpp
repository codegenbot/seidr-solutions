```c++
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents;
    quarters = cents / 25;
    cents %= 25;

    dimes = cents / 10;
    cents %= 10;

    nickles = cents / 5;
    cents %= 5;

    pennies = cents;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}