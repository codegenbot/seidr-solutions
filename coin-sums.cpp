#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = min(cents / 1, (cents - (cents % 100)) / 1);
    cents -= pennies * 100;
    cout << pennies << endl;

    int nickels = min((cents - pennies * 100) / 5, ((cents - pennies * 100) % 50) / 5);
    cents -= nickels * 50;
    cout << nickels << endl;

    int dimes = min((cents - nickels * 50) / 10, ((cents - nickels * 50) % 20) / 10);
    cents -= dimes * 20;
    cout << dimes << endl;

    int quarters = (cents / 25);
    cout << quarters << endl;

    return 0;
}