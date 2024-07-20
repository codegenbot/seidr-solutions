#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // values of quarters, dimes, nickles and pennies in cents

    int quarter = cents / 25;
    cents %= 25;
    int dime = cents / 10;
    cents %= 10;
    int nickel = cents / 5;
    cents %= 5;
    int penny = cents;

    cout << quarter << endl;
    cout << dime << endl;
    cout << nickel << endl;
    cout << penny << endl;

    return 0;
}