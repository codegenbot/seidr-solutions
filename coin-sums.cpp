#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    cout << (quarters > 0 ? quarters + " quarters" : "") << endl;

    int dimes = cents / 10;
    cents %= 10;

    cout << (dimes > 0 ? dimes + " dimes" : "") << endl;

    int nickles = cents / 5;
    cents %= 5;

    cout << (nickles > 0 ? nickles + " nickels" : "") << endl;

    cout << (cents > 0 ? cents + " pennies" : " no pennies needed") << endl;

    return 0;
}