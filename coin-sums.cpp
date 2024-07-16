#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents / 1;
    int nickels = (cents % 100) / 25;
    int dimes = ((cents % 100) % 25) / 10;
    int quarters = (((cents % 100) % 25) % 10) / 5;

    cout << pennies << endl;
    cout << nickels << endl;
    cout << dimes << endl;
    cout << quarters << endl;

    return 0;
}