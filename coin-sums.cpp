#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int max_quarters = min(cents / 25, 99); // maximum quarters is 99 (3 times 25)
    int quarters = max_quarters;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickles = cents / 5;
    cents %= 5;

    int pennies = cents;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}