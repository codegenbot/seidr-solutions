#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // values of quarters, dimes, nickels, pennies in cents

    int quarter = cents / 25;
    int remaining = cents % 25;

    int dime = remaining / 10;
    remaining %= 10;

    int nickel = remaining / 5;
    remaining %= 5;

    int penny = remaining;

    cout << quarter << endl;
    cout << dime << endl;
    cout << nickel << endl;
    cout << penny << endl;

    return 0;
}