#include <iostream>
#include <vector>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // quarters, dimes, nickels, pennies

    int quarter = cents / 25;
    cents %= 25;

    int dime = cents / 10;
    cents %= 10;

    int nickel = cents / 5;
    cents %= 5;

    int penny = cents;

    cout << "Quarters: " << quarter << endl;
    cout << "Dimes: " << dime << endl;
    cout << "Nickels: " << nickel << endl;
    cout << "Pennies: " << penny << endl;

    return 0;
}