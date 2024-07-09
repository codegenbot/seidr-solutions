Here is the solution:

#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents / 1;
    int nickles = cents / 5;
    cents %= 5;
    int dimes = cents / 10;
    cents %= 10;
    int quarters = cents / 25;

    cout << pennies << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << quarters << endl;

    return 0;
}